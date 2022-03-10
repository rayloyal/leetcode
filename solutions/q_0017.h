#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty())
            return {};
        uint8_t table[8][2] = {{0, 3}, {3, 3}, {6, 3}, {9, 3}, {12, 3}, {15, 4}, {19, 3}, {22, 4}};
        uint8_t chs[4] = {0 ,0, 0, 0};

        int len = digits.length();
        int ret_size = 1;
        for(int i = 0; i < len; i++){
            auto code = digits[i] - '2';
            chs[i] = code;
            ret_size *= table[code][1];
        }

        vector<string> ret(ret_size, string(len, '0'));

        int code[4] = {0, 0, 0, 0};
        auto code_increase = [&code, &len, &chs, &table](){
            for(int i = 0; i < len; i++){
                if(++code[i] < table[chs[i]][1])
                    return;
                code[i] = 0;
            }
        };

        for(int i = 0; i < ret_size; i++){
            for(int j = 0; j < len; j++){
                ret[i][j] = 'a' + table[chs[j]][0] + code[j];
            }
            code_increase();
        }
        return ret;
    }
};
