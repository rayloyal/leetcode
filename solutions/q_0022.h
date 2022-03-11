#include <iostream>
#include <vector>

using namespace std;

class Solution {
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
        vector<string> ret(res_size, string(2 * n, '-'));

        auto *pos = new uint8_t[n];
        for(int i = 0; i < n; i++)
            pos[i] = i;

        auto validate_pos = [&pos, &n](){
            int counter = 1;
            for(int i = 1; i < n; i++){
                counter += 2 - (pos[i] - pos[i - 1]);
                if(counter < 0)
                    return false;
            }
            return true;
        };

        auto it = ret.begin();

        for(int i = n - 1; i > 0; i++){
            for(int j = pos[i]; j < n; j++){
                if(!validate_pos()){

                }

                for(int k = 0; k < n; k++){

                }

            }
        }

        delete []pos;

        vector<string> result;
        string current;
        backtrack(result, current, 0, 0, n);

        return result;
    }

    void backtrack(vector<string>& ans, string& cur, int open, int close, int n) {
        if (cur.size() == n * 2) {
            ans.push_back(cur);
            return;
        }
        if (open < n) {
            cur.push_back('(');
            backtrack(ans, cur, open + 1, close, n);
            cur.pop_back();
        }
        if (close < open) {
            cur.push_back(')');
            backtrack(ans, cur, open, close + 1, n);
            cur.pop_back();
        }
    }
};
