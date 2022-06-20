#include <iostream>
#include "list_node.h"
#include <map>

using namespace std;

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        auto ret = new ListNode();
        auto p = ret;
        multimap<int, ListNode*> sorted_map;

        for(auto &list_it : lists){
            if(list_it != nullptr){
                sorted_map.emplace(list_it->val, list_it);
            }
        }

        multimap<int, ListNode*>::iterator min_it;
        while(!sorted_map.empty()){
            min_it = sorted_map.begin();
            p->next = min_it->second;
            p = p->next;

            while(p->next != nullptr && p->val == p->next->val){
                p = p->next;
            }

            sorted_map.erase(min_it);
            if(p->next != nullptr){
                sorted_map.emplace(p->next->val, p->next);
            }
        }
        return ret->next;
    }
};
