#include <iostream>
#include "list_node.h"

using namespace std;

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        auto ret = new ListNode();
        int carry = 0;
        int sum = 0;
        auto iter = ret;
        int v1;
        int v2;
        while(l1 != nullptr || l2 != nullptr){
            if(l1 == nullptr){
                v1 = 0;
            } else {
                v1 = l1->val;
                l1 = l1->next;
            }

            if(l2 == nullptr){
                v2 = 0;
            } else {
                v2 = l2->val;
                l2 = l2->next;
            }

            sum = v1 + v2 + carry;
            if(sum >= 10){
                sum -= 10;
                carry = 1;
            } else {
                carry = 0;
            }

            iter->next = new ListNode(sum);
            iter = iter->next;
        }

        if(carry){
            iter->next = new ListNode(1);
            iter = iter->next;
        }

        return ret->next;
    }
};
