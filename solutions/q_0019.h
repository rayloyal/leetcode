#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        auto p = head;
        for(int i = 0; i < n; i++)
            p = p->next;

        if(p == nullptr)
            return head->next;

        auto p_rm = head;
        p = p->next;
        while(p != nullptr){
            p = p->next;
            p_rm = p_rm->next;
        }

        p_rm->next = p_rm->next->next;
        return head;
    }
};
