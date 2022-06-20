#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        bitset<30> flags;
        vector<int> ret;
        auto str_len = s.length();
        auto word_len = words[0].length();
        for(auto i = 0; i < word_len; i++){
            find_sub_str(s.data() + i, str_len - i, ret);
        }
        return ret;
    }

    void find_sub_str(const char* data, size_t len, vector<int>& ret){

    }
};
