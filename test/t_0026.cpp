#include "q_0026.h"
#include "gtest/gtest.h"

using namespace std;
using ::testing::Test;

TEST(Q0026, EXAMPLE){
    Solution solution;

    vector<int> ret = {1, 1, 2};
    int res = 2;
    ASSERT_EQ(solution.removeDuplicates(ret), res);

    ret = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    res = 5;
    ASSERT_EQ(solution.removeDuplicates(ret), res);
}
