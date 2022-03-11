#include <iostream>
#include "list_node.h"

using namespace std;

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
