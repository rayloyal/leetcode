#include <iostream>
#include "list_node.h"

using namespace std;

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == nullptr)
            return head;

        auto ret = new ListNode(0, head);
        auto prev = ret;
        auto p = head;
        ListNode* temp;
        while(p->next != nullptr){
            temp = p->next;
            p->next = temp->next;
            prev->next = temp;
            temp->next = p;
            if(p->next == nullptr)
                break;
            prev = p;
            p = prev->next;
        }

        return ret->next;
    }
};
