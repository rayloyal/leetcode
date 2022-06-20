#include "q_0029.h"
#include "gtest/gtest.h"

using namespace std;
using ::testing::Test;

TEST(Q0029, EXAMPLE){
    Solution solution;

//    ASSERT_EQ(solution.divide(10, 3), 3);
//    ASSERT_EQ(solution.divide(7, -3), -2);
//    ASSERT_EQ(solution.divide(-2147483648, -2147483648), 1);
    ASSERT_EQ(solution.divide(-2147483648, 2), -1073741824);
}
