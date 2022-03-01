#include <iostream>
#include <climits>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        if(x < 10)
            return true;

        int rem = x % 10;
        if(rem == 0)
            return false;

        int quo = x / 10;
        long rx = rem;
        while(quo != 0){
            rem = quo % 10;
            rx = rx * 10 + rem;
            quo = quo / 10;
        }
        return rx < INT_MAX && x == rx;
    }
};
