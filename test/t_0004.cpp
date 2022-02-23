#include "q_0004.h"
#include "gtest/gtest.h"

using namespace std;
using ::testing::Test;

TEST(Q0004, EXAMPLE){
    Solution solution;

    vector<int> nums1;
    vector<int> nums2;

    nums1 = {1, 3};
    nums2 = {2};
    ASSERT_EQ(solution.findMedianSortedArrays(nums1, nums2), 2);

    nums1 = {1, 2};
    nums2 = {3, 4};
    ASSERT_EQ(solution.findMedianSortedArrays(nums1, nums2), 2.5);

    nums1 = {2, 3, 4};
    nums2 = {1};
    ASSERT_EQ(solution.findMedianSortedArrays(nums1, nums2), 2.5);
}
