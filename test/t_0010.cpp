#include "q_0010.h"
#include "gtest/gtest.h"

using namespace std;
using ::testing::Test;

TEST(Q0010, EXAMPLE){
    Solution solution;

    string s1 = "aa";
    string p1 = "a";
    ASSERT_FALSE(solution.isMatch(s1, p1));

    string s2 = "aa";
    string p2 = "a*";
    ASSERT_TRUE(solution.isMatch(s2, p2));

    string s3 = "ab";
    string p3 = ".*";
    ASSERT_TRUE(solution.isMatch(s3, p3));
}
