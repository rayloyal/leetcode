#include "q_0015.h"
#include "gtest/gtest.h"

using namespace std;
using ::testing::Test;

bool equal(const vector<vector<int>>& l, const vector<vector<int>>& r){
    if(l.size() != r.size())
        return false;
    if(l.empty())
        return true;
    auto it_l = l.begin();
    auto it_r = r.begin();
    for(; it_l != l.end(); it_l++, it_r++){
        if(it_l->size() != 3 || it_r->size() != 3)
            return false;
        if((*it_l)[0] != (*it_r)[0] || (*it_l)[1] != (*it_r)[1] || (*it_l)[2] != (*it_r)[2])
            return false;
    }
    return true;
}

TEST(Q0015, EXAMPLE){
    Solution solution;

    vector<int> nums1 = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> res1 = {{-1, 0, 1}, {-1, -1, 2}};
    ASSERT_EQ(solution.threeSum(nums1), res1);

    vector<int> nums2 = {};
    vector<vector<int>> res2 = {};
    ASSERT_EQ(solution.threeSum(nums2), res2);

    vector<int> nums3 = {0};
    vector<vector<int>> res3 = {};
    ASSERT_EQ(solution.threeSum(nums3), res3);
}
