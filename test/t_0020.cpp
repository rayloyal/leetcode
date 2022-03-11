#include "q_0020.h"
#include "gtest/gtest.h"

using namespace std;
using ::testing::Test;

TEST(Q0020, EXAMPLE){
    Solution solution;

    string s1 = "()";
    ASSERT_TRUE(solution.isValid(s1));

    string s2 = "()[]{}";
    ASSERT_TRUE(solution.isValid(s2));

    string s3 = "(]";
    ASSERT_FALSE(solution.isValid(s3));

    string s4 = "([)]";
    ASSERT_FALSE(solution.isValid(s4));

    string s5 = "{[]}";
    ASSERT_TRUE(solution.isValid(s5));
}
