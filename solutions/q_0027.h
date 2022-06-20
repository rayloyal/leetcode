#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.empty())
            return 0;

        auto lp = nums.begin();
        auto rp = nums.end() - 1;
        for(; lp != rp; ){
            if(*lp != val){
                lp++;
                continue;
            }

            for(; lp != rp;){
                if(*rp != val)
                    break;
                rp--;
            }

            if(lp == rp)
                return lp - nums.begin();

            *lp = *rp;
            rp--;
        }
        return lp - nums.begin() + (*lp != val);
    }
};
