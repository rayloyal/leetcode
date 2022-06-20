#include "q_0022.h"
#include "gtest/gtest.h"
#include <set>

using namespace std;
using ::testing::Test;

bool equal(const vector<string>& l, const vector<string>& r){
    return l.size() == r.size() && set<string>(l.begin(), l.end()) == set<string>(r.begin(), r.end());
}

TEST(Q0022, EXAMPLE){
    Solution solution;

    int n = 3;
    vector<string> res = {"((()))","(()())","(())()","()(())","()()()"};
    ASSERT_TRUE(equal(solution.generateParenthesis(n), res));

    n = 1;
    res = {"()"};
    ASSERT_TRUE(equal(solution.generateParenthesis(n), res));
}
