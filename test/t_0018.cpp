#include "q_0018.h"
#include "gtest/gtest.h"

using namespace std;
using ::testing::Test;

TEST(Q0018, EXAMPLE){
    Solution solution;

    vector<int> nums1 = {1,0,-1,0,-2,2};
    int target1 = 0;
    vector<vector<int>> res1 = {{-2, -1, 1, 2}, {-2, 0,  0, 2}, {-1, 0,  0, 1}};
    ASSERT_EQ(solution.fourSum(nums1, target1), res1);

    vector<int> nums2 = {2, 2, 2, 2, 2};
    int target2 = 8;
    vector<vector<int>> res2 = {{2, 2, 2, 2}};
    ASSERT_EQ(solution.fourSum(nums2, target2), res2);
}
