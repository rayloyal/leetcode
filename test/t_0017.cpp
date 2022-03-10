#include "q_0017.h"
#include "gtest/gtest.h"

using namespace std;
using ::testing::Test;

TEST(Q0017, EXAMPLE){
    Solution solution;

    string digits1 = "23";
    vector<string> res1 = {"ad", "bd", "cd", "ae", "be", "ce", "af", "bf", "cf"};
    ASSERT_EQ(solution.letterCombinations(digits1), res1);

    string digits2 = "";
    vector<string> res2 = {};
    ASSERT_EQ(solution.letterCombinations(digits2), res2);

    string digits3 = "2";
    vector<string> res3 = {"a","b","c"};
    ASSERT_EQ(solution.letterCombinations(digits3), res3);

}
