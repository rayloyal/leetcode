#include "q_0016.h"
#include "gtest/gtest.h"

using namespace std;
using ::testing::Test;

TEST(Q0016, EXAMPLE){
    Solution solution;

    vector<int> nums1 = {-1, 2, 1, -4, -4};
    int target1 = 1;
    ASSERT_EQ(solution.threeSumClosest(nums1, target1), 2);

    vector<int> nums2 = {0, 0, 0};
    int target2 = 1;
    ASSERT_EQ(solution.threeSumClosest(nums2, target2), 0);
}
