#ifndef LEETCODE_LIST_NODE_H
#define LEETCODE_LIST_NODE_H

#include <vector>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

static ListNode* create_nodes(const vector<int>& vec){
    auto head = new ListNode();
    auto p = head;
    for(auto item : vec){
        p->next = new ListNode(item);
        p = p->next;
    }
    return head->next;
}

bool node_list_equal(ListNode *l, ListNode *r){
    do{
        if(l == nullptr || r == nullptr)
            return l == r;

        if(l->val != r->val)
            return false;

        l = l->next;
        r = r->next;
    }while(true);
}

#endif //LEETCODE_LIST_NODE_H
