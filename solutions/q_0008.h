#include <iostream>
#include <climits>

using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int len = s.length();

        bool negative = false;
        int i = 0;
        long ret = 0;

        for(; i < len; i++){
            if(s[i] == ' ')
                continue;

            if(s[i] == '-'){
                negative = true;
                i++;
            } else if (s[i] == '+'){
                negative = false;
                i++;
            }
            break;
        }

        for(; i < len; i++){
            if(s[i] < '0')
                break;
            if(s[i] > '9')
                break;

            ret = ret * 10 + (s[i] - '0');
            if(ret > INT_MAX)
                return negative ? INT_MIN : INT_MAX;
        }

        return negative ? ret * -1 : ret;
    }
};
