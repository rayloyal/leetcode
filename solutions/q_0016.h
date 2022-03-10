#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        if(target <= -3000)
            return nums[0] + nums[1] + nums[2];

        auto size = nums.size();
        if(target >= 3000)
            return nums[size - 3] + nums[size - 2] + nums[size - 1];

        auto it = nums.begin();
        auto it_end = nums.end() - 2;

        vector<int>::iterator it_l;
        vector<int>::iterator it_r;
        int two_sum;
        int last_num = -1001;
        int min_offset = 20000;
        int offset;

        for(; it != it_end; last_num = *it++){
            if(last_num == *it)
                continue;
            two_sum = target - *it;
            it_l = it + 1;
            it_r = nums.end() - 1;
            do{
                offset = two_sum - *it_l - *it_r;
                if(offset == 0)
                    return target;
                min_offset = abs(min_offset) < abs(offset) ? min_offset: offset;
                offset > 0 ? ++it_l: --it_r;
            } while(it_l != it_r);
        }
        return target - min_offset;
    }
};
