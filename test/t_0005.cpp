#include "q_0005.h"
#include "gtest/gtest.h"

using namespace std;
using ::testing::Test;

TEST(Q0005, EXAMPLE){
    Solution solution;

    string s1 = "bbabb";
    ASSERT_EQ(solution.longestPalindrome(s1), "bbabb");

    string s2 = "cbbd";
    ASSERT_EQ(solution.longestPalindrome(s2), "bb");
}
