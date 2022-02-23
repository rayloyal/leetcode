#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        auto nums_size = nums.size();
        if(nums_size <= 2)
            return {0, 1};
        unordered_map<int, int> hash_table(nums_size);
        unordered_map<int, int>::const_iterator find_num;
        for(int i = 0; i < nums_size; i++){
            find_num = hash_table.find(target - nums[i]);
            if(find_num != hash_table.end())
                return { i, find_num->second };
            hash_table.emplace(nums[i], i);
        }
        return {0, 1};
    }
};