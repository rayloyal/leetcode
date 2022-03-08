#include "q_0013.h"
#include "gtest/gtest.h"

using namespace std;
using ::testing::Test;

TEST(Q0013, EXAMPLE){
    Solution solution;

    string s1 = "III";
    ASSERT_EQ(solution.romanToInt(s1), 3);

    string s2 = "IV";
    ASSERT_EQ(solution.romanToInt(s2), 4);

    string s3 = "IX";
    ASSERT_EQ(solution.romanToInt(s3), 9);

    string s4 = "LVIII";
    ASSERT_EQ(solution.romanToInt(s4), 58);

    string s5 = "MCMXCIV";
    ASSERT_EQ(solution.romanToInt(s5), 1994);
}
