#include <iostream>

using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1)
            return s;

        int len = s.length();
        if(len <= numRows)
            return s;

        string ret;
        ret.resize(s.length());

        int step = (numRows << 1) - 2;
        int round = (len - 1) / step + 1;
        int pos;
        int index = 0;

        for(int j = 0; j < round; j++){
            pos = j * step;
            ret[index++] = s[pos];
        }

        for(int i = 1; i < numRows - 1; i++){
            for(int j = 0; j < round; j++){
                pos = j * step + i;
                if(pos >= len)
                    continue;
                ret[index++] = s[pos];

                pos = (j + 1) * step - i;
                if(pos < len)
                    ret[index++] = s[pos];
            }
        }

        for(int j = 0; j < round; j++){
            pos = j * step + numRows - 1;
            if(pos < len)
                ret[index++] = s[pos];
        }

        return ret;
    }
};
