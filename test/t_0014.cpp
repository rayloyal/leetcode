#include "q_0014.h"
#include "gtest/gtest.h"

using namespace std;
using ::testing::Test;

TEST(Q0014, EXAMPLE){
    Solution solution;

    vector<string> strs1 = {"flower", "flow", "flight"};
    ASSERT_EQ(solution.longestCommonPrefix(strs1), "fl");

    vector<string> strs2 = {"dog", "racecar", "car"};
    ASSERT_EQ(solution.longestCommonPrefix(strs2), "");
}
