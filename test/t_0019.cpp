#include "q_0019.h"
#include "gtest/gtest.h"

using namespace std;
using ::testing::Test;

ListNode* build_node_list(const vector<int>& nums){
    auto head = new ListNode();
    auto p = head;
    for(auto num : nums){
        p->next = new ListNode(num);
        p = p->next;
    }
    return head->next;
}

bool equal(ListNode* l, ListNode* r){
    do{
        if(l == nullptr || r == nullptr)
            return l == r;

        if(l->val != r->val)
            return false;

        l = l->next;
        r = r->next;
    }while(true);
}

TEST(Q0019, EXAMPLE){
    Solution solution;

    auto head1 = build_node_list({1, 2, 3, 4, 5});
    int n1 = 2;
    ASSERT_TRUE(equal(solution.removeNthFromEnd(head1, n1), build_node_list({1, 2, 3, 5})));

    auto head2 = build_node_list({1});
    int n2 = 1;
    ASSERT_TRUE(equal(solution.removeNthFromEnd(head2, n2), build_node_list({})));

    auto head3 = build_node_list({1, 2});
    int n3 = 1;
    ASSERT_TRUE(equal(solution.removeNthFromEnd(head3, n3), build_node_list({1})));

}
