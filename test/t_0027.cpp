#include "q_0027.h"
#include "gtest/gtest.h"

using namespace std;
using ::testing::Test;

TEST(Q0027, EXAMPLE){
    Solution solution;

    vector<int> ret = {3, 2, 2, 3};
    int res = 2;
    ASSERT_EQ(solution.removeElement(ret, 3), 2);

    ret = {0, 1, 2, 2, 3, 0, 4, 2};
    res = 5;
    ASSERT_EQ(solution.removeElement(ret, 2), 5);

    ret = {4, 5};
    res = 1;
    ASSERT_EQ(solution.removeElement(ret, 4), res);
}
