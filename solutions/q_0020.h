#include <iostream>
#include <stack>
#include <map>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        if(s.length() & 1)
            return false;

        map<char, char> ch_pair = {{')', '('}, {']', '['}, {'}', '{'}};
        stack<char> formula;
        for(auto &ch : s){
            switch(ch){
                case '(':
                case '[':
                case '{': formula.emplace(ch); break;
                default: {
                    if(formula.empty() || formula.top() != ch_pair[ch])
                        return false;
                    formula.pop();
                    break;
                }
            }
        }
        return formula.empty();
    }
};
