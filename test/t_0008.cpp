#include "q_0008.h"
#include "gtest/gtest.h"

using namespace std;
using ::testing::Test;

TEST(Q0008, EXAMPLE){
    Solution solution;

    int x1 = 121;
    ASSERT_EQ(solution.isPalindrome(x1), true);

    int x2 = -121;
    ASSERT_EQ(solution.isPalindrome(x2), false);

    int x3 = 10;
    ASSERT_EQ(solution.isPalindrome(x3), false);
}
