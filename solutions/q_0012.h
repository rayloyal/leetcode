#include <iostream>

using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        string ret;
        int rem;
        char chs[4][3] = {{'I', 'V', 'X'}, {'X', 'L', 'C'}, {'C', 'D', 'M'}, {'M', '-', '-'}};
        int round = 0;
        do{
            rem = num % 10;
            num /= 10;
            switch(rem){
                case 1:
                case 2:
                case 3: { ret.insert(ret.begin(), rem, chs[round][0]); break; }
                case 4: { ret.insert(ret.begin(), chs[round][1]); ret.insert(ret.begin(), chs[round][0]); break; }
                case 5: { ret.insert(ret.begin(), chs[round][1]); break; }
                case 6:
                case 7:
                case 8: { ret.insert(ret.begin(), rem - 5, chs[round][0]); ret.insert(ret.begin(), chs[round][1]); break; }
                case 9: { ret.insert(ret.begin(), chs[round][2]); ret.insert(ret.begin(), chs[round][0]); break; }
                default: break;
            }
            ++round;
        }while(num != 0);
        return ret;
    }
};
