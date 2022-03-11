#include "q_0019.h"
#include "gtest/gtest.h"

using namespace std;
using ::testing::Test;

TEST(Q0019, EXAMPLE){
    Solution solution;

    auto head1 = create_nodes({1, 2, 3, 4, 5});
    int n1 = 2;
    ASSERT_TRUE(node_list_equal(solution.removeNthFromEnd(head1, n1), create_nodes({1, 2, 3, 5})));

    auto head2 = create_nodes({1});
    int n2 = 1;
    ASSERT_TRUE(node_list_equal(solution.removeNthFromEnd(head2, n2), create_nodes({})));

    auto head3 = create_nodes({1, 2});
    int n3 = 1;
    ASSERT_TRUE(node_list_equal(solution.removeNthFromEnd(head3, n3), create_nodes({1})));

}
