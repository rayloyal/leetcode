#include "q_0002.h"
#include "gtest/gtest.h"

using namespace std;
using ::testing::Test;

ListNode *build_list(const vector<int> &vec){
    auto ret = new ListNode();
    auto ret_it = ret;
    for(auto it : vec){
        ret_it->next = new ListNode(it);
        ret_it = ret_it->next;
    }
    return ret->next;
}

bool list_equal(ListNode *l, ListNode *r){
    do {
        if(l->val != r->val)
            return false;

        if(l->next == nullptr && r->next == nullptr)
            return true;

        if(l->next != nullptr && r->next != nullptr){
            l = l->next;
            r = r->next;
            continue;
        }
        return false;
    } while(true);
}

TEST(Q0002, EXAMPLE){
    Solution solution;

    ListNode *l1;
    ListNode *l2;
    ListNode *res;

    l1 = build_list({2, 4, 3});
    l2 = build_list({5, 6, 4});
    res = build_list({7, 0, 8});
    ASSERT_TRUE(list_equal(solution.addTwoNumbers(l1, l2), res));

    l1 = build_list({0});
    l2 = build_list({0});
    res = build_list({0});
    ASSERT_TRUE(list_equal(solution.addTwoNumbers(l1, l2), res));

    l1 = build_list({9, 9, 9, 9, 9, 9, 9});
    l2 = build_list({9, 9, 9, 9});
    res = build_list({8, 9, 9, 9, 0, 0, 0, 1});
    ASSERT_TRUE(list_equal(solution.addTwoNumbers(l1, l2), res));
}
