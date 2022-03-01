#include "q_0007.h"
#include "gtest/gtest.h"

using namespace std;
using ::testing::Test;

TEST(Q0007, EXAMPLE){
    Solution solution;

    int x1 = 123;
    ASSERT_EQ(solution.reverse(x1), 321);

    int x2 = -123;
    ASSERT_EQ(solution.reverse(x2), -321);

    int x3 = 120;
    ASSERT_EQ(solution.reverse(x3), 21);

    int x4 = 0;
    ASSERT_EQ(solution.reverse(x4), 0);
}
