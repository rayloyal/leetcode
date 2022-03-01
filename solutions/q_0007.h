#include <iostream>
#include <climits>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        long ret = 0;
        while(x != 0){
            ret = ret * 10 + x % 10;
            x /= 10;
        }

        return ret > INT_MAX || ret < INT_MIN ? 0 : ret;
    }
};
