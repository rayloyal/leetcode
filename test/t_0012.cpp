#include "q_0012.h"
#include "gtest/gtest.h"

using namespace std;
using ::testing::Test;

TEST(Q0012, EXAMPLE){
    Solution solution;

    int num1 = 3;
    ASSERT_EQ(solution.intToRoman(num1), "III");

    int num2 = 4;
    ASSERT_EQ(solution.intToRoman(num2), "IV");

    int num3 = 9;
    ASSERT_EQ(solution.intToRoman(num3), "IX");

    int num4 = 58;
    ASSERT_EQ(solution.intToRoman(num4), "LVIII");

    int num5 = 1994;
    ASSERT_EQ(solution.intToRoman(num5), "MCMXCIV");
}
