#include <iostream>
#include <climits>

using namespace std;

class Solution {

#define ABS(num, neg) if((num) < 0){ (neg) = !(neg); num = 0 - num; }
#define INT_RET(res, neg) return (res - (neg)) > INT_MAX ? INT_MAX : (1 - (int((neg)) << 1)) * res

public:
    int divide(int dividend, int divisor) {
        if(dividend == 0)
            return 0;

        if(divisor == 0)
            return INT_MAX;

        bool negative = false;
        int64_t dividend_64 = dividend;
        int64_t divisor_64 = divisor;

        ABS(dividend_64, negative);
        ABS(divisor_64, negative);

        if(dividend_64 < divisor_64)
            return 0;

        if(divisor_64 == 1)
            INT_RET(dividend_64, negative);

        int64_t res = 0;
        int power = 1;
        int64_t cur_divisor = divisor_64;

        while(dividend_64 >= cur_divisor) {
            dividend_64 -= cur_divisor;
            cur_divisor = cur_divisor << 1;
            res += power;
            power = power << 1;
        }

        while(dividend_64 >= divisor_64){
            if(dividend_64 < cur_divisor){
                cur_divisor = cur_divisor >> 1;
                power = power >> 1;
                if(power == 0)
                    break;
                continue;
            }

            dividend_64 -= cur_divisor;
            res += power;
        }

        INT_RET(res, negative);
    }
};
