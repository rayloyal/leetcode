#include "q_0002.h"
#include "gtest/gtest.h"

using namespace std;
using ::testing::Test;

TEST(Q0002, EXAMPLE){
    Solution solution;

    ListNode *l1;
    ListNode *l2;
    ListNode *res;

    l1 = create_nodes({2, 4, 3});
    l2 = create_nodes({5, 6, 4});
    res = create_nodes({7, 0, 8});
    ASSERT_TRUE(node_list_equal(solution.addTwoNumbers(l1, l2), res));

    l1 = create_nodes({0});
    l2 = create_nodes({0});
    res = create_nodes({0});
    ASSERT_TRUE(node_list_equal(solution.addTwoNumbers(l1, l2), res));

    l1 = create_nodes({9, 9, 9, 9, 9, 9, 9});
    l2 = create_nodes({9, 9, 9, 9});
    res = create_nodes({8, 9, 9, 9, 0, 0, 0, 1});
    ASSERT_TRUE(node_list_equal(solution.addTwoNumbers(l1, l2), res));
}
