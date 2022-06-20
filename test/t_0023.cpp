#include "q_0023.h"
#include "gtest/gtest.h"

using namespace std;
using ::testing::Test;

TEST(Q0023, EXAMPLE){
    Solution solution;

    auto lists = vector<ListNode*>{
        create_nodes({1, 4, 5}),
        create_nodes({1, 3, 4}),
        create_nodes({2, 6})
    };

    ASSERT_TRUE(node_list_equal(solution.mergeKLists(lists), create_nodes({1, 1, 2, 3, 4, 4, 5, 6})));
}
