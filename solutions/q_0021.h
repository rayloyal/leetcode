#include <iostream>
#include "list_node.h"

using namespace std;

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == nullptr)
            return list2;
        if(list2 == nullptr)
            return list1;

        auto head = new ListNode();
        auto p = head;

        do {
            if(list1->val < list2->val){
                p->next = list1;
                p = p->next;
                list1 = list1->next;
                if(list1 == nullptr){
                    p->next = list2;
                    break;
                }
            } else {
                p->next = list2;
                p = p->next;
                list2 = list2->next;
                if(list2 == nullptr){
                    p->next = list1;
                    break;
                }
            }
        } while(true);
        return head->next;
    }
};
