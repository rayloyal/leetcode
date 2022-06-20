#include "q_0025.h"
#include "gtest/gtest.h"

using namespace std;
using ::testing::Test;

TEST(Q0025, EXAMPLE){
    Solution solution;
    ASSERT_TRUE(node_list_equal(solution.reverseKGroup(create_nodes({1, 2, 3, 4, 5}), 2),
                                create_nodes({2, 1, 4, 3, 5})));
    ASSERT_TRUE(node_list_equal(solution.reverseKGroup(create_nodes({1, 2, 3, 4, 5}), 3),
                                create_nodes({3, 2, 1, 4, 5})));
}
