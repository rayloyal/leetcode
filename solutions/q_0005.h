#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string longestPalindrome(string s){
        size_t len = s.length();
        if(len <= 1)
            return s;

        size_t i_max(len - 1), max_len(0), start_pos(0);
        vector<vector<bool>> dp(len, vector<bool>(len, false));
        for(auto i = 0; i < i_max; i++){
            dp[i][i] = true;
            if(s[i] == s[i + 1]){
                if(max_len == 0){
                    max_len = 1;
                    start_pos = i;
                }
                dp[i][i + 1] = true;
            }
        }

        for(auto j = 2; j < len; j++){
            for(auto i = 0; i < i_max; i++){
                if(dp[i + 1][j - 1] && s[i] == s[j]){
                    if(j - i > max_len){
                        max_len = j - i;
                        start_pos = i;
                    }
                    dp[i][j] = true;
                }
            }
        }

        return s.substr(start_pos, max_len + 1);
    }
};
