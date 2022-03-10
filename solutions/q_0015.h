#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        unordered_map<int, int> negative_nums;
        int zeros = 0;
        unordered_map<int, int> positive_nums;

        if(nums.size() < 3)
            return {};

        for(auto num : nums){
            if(num == 0){
                zeros++;
                continue;
            }
            if(num < 0){
                auto res = negative_nums.emplace(num, 1);
                if(!res.second)
                    res.first->second++;
                continue;
            }
            auto res = positive_nums.emplace(num, 1);
            if(!res.second)
                res.first->second++;
        }

        vector<vector<int>> ret;
        if(zeros >= 3)
            ret.emplace_back(vector<int>{0, 0, 0});

        if(negative_nums.empty() || positive_nums.empty())
            return ret;

        int target_num = 0;

        // 1 - 1 - 1
        if(zeros > 0){
            for(auto &num_it : negative_nums){
                target_num = -num_it.first;
                if(positive_nums.find(target_num) != positive_nums.end())
                    ret.emplace_back(vector<int>{num_it.first, 0, target_num});
            }
        }

        // 2 - 0 - 1
        auto src_nums = &negative_nums;
        auto target_nums = &positive_nums;
        for(int i = 0; i < 2; i++){
            for(auto &target_num_it : *target_nums){
                auto bound = (abs(target_num_it.first) - 1) / 2;
                if(!(abs(target_num_it.first) & 1)){
                    //even number
                    target_num = -target_num_it.first / 2;
                    auto find_num = src_nums->find(target_num);
                    if(find_num != src_nums->end() && find_num->second > 1)
                        ret.emplace_back(vector<int>{target_num, target_num, target_num_it.first});
                }
                for(auto src_num_it : *src_nums){
                    if(abs(src_num_it.first) > abs(bound))
                        continue;
                    target_num = -target_num_it.first - src_num_it.first;
                    if(src_nums->find(target_num) != src_nums->end())
                        ret.emplace_back(vector<int>{src_num_it.first, target_num, target_num_it.first});
                }
            }
            swap(src_nums, target_nums);
        }

        return ret;
    }
};
