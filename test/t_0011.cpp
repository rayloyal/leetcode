#include "q_0011.h"
#include "gtest/gtest.h"

using namespace std;
using ::testing::Test;

TEST(Q0011, EXAMPLE){
    Solution solution;

    vector<int> height1 = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    ASSERT_EQ(solution.maxArea(height1), 49);

    vector<int> height2 = {1, 1};
    ASSERT_EQ(solution.maxArea(height2), 1);
}
