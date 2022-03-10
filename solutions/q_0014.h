#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        size_t min_len = 200;
        size_t common_len = 0;

        if(strs.size() == 1)
            return strs[0];

        for(auto &str : strs){
            min_len = min(min_len, str.length());
            if(min_len == 0)
                return string{};
        }

        for(int i = 0; i < min_len; i++){
            auto ch = strs[0][i];
            for(auto it = strs.begin() + 1; it != strs.end(); it++){
                if((*it)[i] != ch)
                    return strs[0].substr(0, common_len);
            }
            common_len++;
        }
        return strs[0].substr(0, common_len);
    }
};
