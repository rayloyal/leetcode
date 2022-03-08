#include <iostream>
#include <map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int last = 0;
        int current = 0;
        int ret = 0;
        for(auto it = s.rbegin(); it != s.rend(); it++){
            switch (*it) {
                case 'I': current = 1; break;
                case 'V': current = 5; break;
                case 'X': current = 10; break;
                case 'L': current = 50; break;
                case 'C': current = 100; break;
                case 'D': current = 500; break;
                case 'M': current = 1000; break;
            }
            last > current ? ret -= current : ret += current;
            last = current;
        }
        return ret;
    }
};
