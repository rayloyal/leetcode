#include "q_0021.h"
#include "gtest/gtest.h"

using namespace std;
using ::testing::Test;

TEST(Q0021, EXAMPLE){
    Solution solution;

    auto l1 = create_nodes({1, 2, 4});
    auto l2 = create_nodes({1, 3, 4});
    auto res = create_nodes({1, 1, 2, 3, 4, 4});
    ASSERT_TRUE(node_list_equal(solution.mergeTwoLists(l1, l2), res));

    l1 = create_nodes({});
    l2 = create_nodes({});
    res = create_nodes({});
    ASSERT_TRUE(node_list_equal(solution.mergeTwoLists(l1, l2), res));

    l1 = create_nodes({});
    l2 = create_nodes({0});
    res = create_nodes({0});
    ASSERT_TRUE(node_list_equal(solution.mergeTwoLists(l1, l2), res));
}
