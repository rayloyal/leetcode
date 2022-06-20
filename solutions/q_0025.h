#include <iostream>
#include "list_node.h"

using namespace std;

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<ListNode*> recorder(k);
        ListNode ret(0, head);
        auto prev = &ret;
        auto p = prev;
        int win_size = 0;
        while(p->next != nullptr){
            p = p->next;
            recorder[win_size++] = p;
            if(win_size == k){
                prev = do_reverse(prev, recorder);
                win_size = 0;
                p = prev;
            }
        }
        return ret.next;
    }

    ListNode* do_reverse(ListNode* prev, vector<ListNode*>& recorder){
        auto p = prev;
        auto end = (*recorder.rbegin())->next;
        for(auto node_it = recorder.rbegin(); node_it != recorder.rend(); node_it++){
            p->next = *node_it;
            p = p->next;
        }
        p->next = end;
        return p;
    }
};
