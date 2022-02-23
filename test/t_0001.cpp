#include "q_0001.h"
#include "gtest/gtest.h"
#include <algorithm>

using namespace std;
using ::testing::Test;

bool res_equal(const vector<int> &l, const vector<int> &r){
    if(l.size() != 2 || r.size() != 2)
        return false;

    return (l[0] == r[0] && l[1] == r[1]) || (l[0] == r[1] && l[1] == r[0]);
}

TEST(Q0001, EXAMPLE){
    Solution solution;

    vector<int> nums;
    int target;
    vector<int> res;

    nums = {2, 7, 11, 15};
    target = 9;
    res = {0, 1};
    ASSERT_TRUE(res_equal(solution.twoSum(nums, target), res));

    nums = {3, 2, 4};
    target = 6;
    res = {1, 2};
    ASSERT_TRUE(res_equal(solution.twoSum(nums, target), res));

    nums = {3, 3};
    target = 6;
    res = {0, 1};
    ASSERT_TRUE(res_equal(solution.twoSum(nums, target), res));
}