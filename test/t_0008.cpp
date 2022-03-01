#include "q_0008.h"
#include "gtest/gtest.h"

using namespace std;
using ::testing::Test;

TEST(Q0008, EXAMPLE){
    Solution solution;

    string s1 = "42";
    ASSERT_EQ(solution.myAtoi(s1), 42);

    string s2 = "   -42";
    ASSERT_EQ(solution.myAtoi(s2), -42);

    string s3 = "4193 with words";
    ASSERT_EQ(solution.myAtoi(s3), 4193);
}
