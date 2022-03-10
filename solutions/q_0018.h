#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if(nums.size() < 4)
            return {};

        sort(nums.begin(), nums.end());

        vector<int>::iterator it_first;
        vector<int>::iterator it_second;
        vector<int>::iterator it_l;
        vector<int>::iterator it_r;
        int64_t two_sum;

        int last_first = INT_MAX;
        int last_second;
        int last_l;
        int last_r;
        int64_t offset;

        vector<vector<int>> ret;
        for(it_first = nums.begin(); it_first != nums.end() - 3; last_first = *it_first++){
            if(last_first == *it_first)
                continue;
            last_second = INT_MAX;
            for(it_second = it_first + 1; it_second != nums.end() - 2; last_second = *it_second++){
                if(last_second == *it_second)
                    continue;
                two_sum = target - *it_first - *it_second;
                it_l = it_second + 1;
                it_r = nums.end() - 1;

                while(it_l != it_r){
                    offset = two_sum - *it_l - *it_r;
                    if(offset > 0){
                        last_l = *it_l++;
                        while(last_l == *it_l && it_l != it_r)
                            it_l++;
                        continue;
                    }

                    if(offset == 0)
                        ret.emplace_back(vector<int>{*it_first, *it_second, *it_l, *it_r});

                    last_r = *it_r--;
                    while(last_r == *it_r && it_l != it_r)
                        it_r--;
                }
            }
        }

        return ret;
    }
};
