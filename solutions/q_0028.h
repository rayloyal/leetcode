#include <iostream>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty())
            return 0;

        if(haystack.length() < needle.length())
            return -1;

        auto rend = haystack.length() - needle.length();
        bool matched;
        for(auto i = 0; i <= rend; i++){
            matched = true;
            for(auto j = 0; j < needle.length(); j++){
                if(haystack[i + j] != needle[j]){
                    matched = false;
                    break;
                }
            }
            if(matched)
                return i;
        }
        return -1;
    }
};
