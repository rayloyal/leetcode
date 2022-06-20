#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cur = INT_MIN;
        auto p = nums.begin();
        for(auto it = nums.begin(); it != nums.end(); it++){
            if(*it != cur){
                cur = *it;
                *p++ = cur;
            }
        }
        return p - nums.begin();
    }
};
