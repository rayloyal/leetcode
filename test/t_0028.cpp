#include "q_0028.h"
#include "gtest/gtest.h"

using namespace std;
using ::testing::Test;

TEST(Q0028, EXAMPLE){
    Solution solution;

    ASSERT_EQ(solution.strStr("hello", "ll"), 2);
    ASSERT_EQ(solution.strStr("aaaaa", "bba"), -1);
    ASSERT_EQ(solution.strStr("mississippi", "mississippi"), 0);
}
