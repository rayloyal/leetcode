#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

class Solution {

#define DEFAULT_CHAR '-'
#define PARENTHESIS_LEFT  '('
#define PARENTHESIS_RIGHT ')'

public:
    vector<string> generateParenthesis(int n) {
        //Catalan number: S(n) = C(2n, n) / (n + 1)
        auto combination = [](int n, int m){
            auto ret = 1;
            for(int i = n - m + 1; i <= n; i++)
                ret *= i;
            for(int i = 1; i <= m; i++)
                ret /= i;
            return ret;
        };

        auto res_size = combination(2 * n, n) / (n + 1);
        vector<string> ret(res_size, string(2 * n, DEFAULT_CHAR));
        int next = 0;
        backtrack(ret, next, 0, 0, 0, n, 0);
        return ret;
    }

    void backtrack(vector<string>& ans, int& next, int cur, int open, int close, int n, int pos) {
        if (pos == 2 * n)
            return;

        if(close > open)
            return;

        if (close == open){
            ans[cur][pos] = PARENTHESIS_LEFT;
            backtrack(ans, next, cur, open + 1, close, n, pos + 1);
            return;
        }

        if(open == n){
            for(; close < n; close++){
                ans[cur][pos++] = PARENTHESIS_RIGHT;
            }
            return;
        }

        memcpy(&ans[++next][0], &ans[cur][0], pos);
        ans[cur][pos] = PARENTHESIS_LEFT;
        ans[next][pos] = PARENTHESIS_RIGHT;

        backtrack(ans, next, next, open, close + 1, n, pos + 1);
        backtrack(ans, next, cur, open + 1, close, n, pos + 1);
    }
};
