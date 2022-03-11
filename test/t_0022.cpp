#include "q_0022.h"
#include "gtest/gtest.h"

using namespace std;
using ::testing::Test;

TEST(Q0022, EXAMPLE){
    Solution solution;

    int n = 3;
    vector<string> res = {"((()))","(()())","(())()","()(())","()()()"};
    ASSERT_EQ(solution.generateParenthesis(n), res);

    n = 1;
    res = {"()"};
    ASSERT_EQ(solution.generateParenthesis(n), res);

    n = 6;
    res = {"()"};
    ASSERT_EQ(solution.generateParenthesis(n).size(), n);
}
