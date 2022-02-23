#include "q_0003.h"
#include "gtest/gtest.h"

using namespace std;
using ::testing::Test;

TEST(Q0003, EXAMPLE){
    Solution solution;

    ASSERT_EQ(solution.lengthOfLongestSubstring("abcabcbb"), 3);
    ASSERT_EQ(solution.lengthOfLongestSubstring("bbbbb"), 1);
    ASSERT_EQ(solution.lengthOfLongestSubstring("pwwkew"), 3);
}
