#include "q_0006.h"
#include "gtest/gtest.h"

using namespace std;
using ::testing::Test;

TEST(Q0006, EXAMPLE){
    Solution solution;

    string s1 = "PAYPALISHIRING";
    int numRows1 = 3;
    ASSERT_EQ(solution.convert(s1, numRows1), "PAHNAPLSIIGYIR");

    string s2 = "PAYPALISHIRING";
    int numRows2 = 4;
    ASSERT_EQ(solution.convert(s2, numRows2), "PINALSIGYAHRPI");
}
