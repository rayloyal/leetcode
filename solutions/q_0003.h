#include <iostream>
#include <string>
#include <bitset>

using namespace std;

class Solution {
public:
    size_t charInStr(char c, const char *s, size_t len){
        for(int i = 0; i < len; i++)
            if(s[i] == c)
                return i + 1;
        return -1;
    };

    int lengthOfLongestSubstring(string s){
        size_t s_len = s.length();
        int max_len = 0;
        int cur_len = 0;
        size_t start_pos = 0;
        for(int i = 0; i < s_len; i++){
            size_t res = charInStr(s[i], &s[start_pos], cur_len);
            if(res != string::npos){
                max_len = max(max_len, cur_len);
                start_pos += res;
                cur_len -= res;
            }
            cur_len++;
        }
        return max(max_len, cur_len);
    }
};
