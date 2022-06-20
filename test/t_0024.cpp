#include "q_0024.h"
#include "gtest/gtest.h"

using namespace std;
using ::testing::Test;

TEST(Q0024, EXAMPLE){
    Solution solution;
    ASSERT_TRUE(node_list_equal(solution.swapPairs(create_nodes({1, 2, 3, 4})), create_nodes({2, 1, 4, 3})));
    ASSERT_TRUE(node_list_equal(solution.swapPairs(create_nodes({})), create_nodes({})));
    ASSERT_TRUE(node_list_equal(solution.swapPairs(create_nodes({1})), create_nodes({1})));
}
