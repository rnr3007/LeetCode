#include <iostream>
#include <vector>
#include "struct.h"

using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* tail = head;
        vector<ListNode*> listNodes = {};
        while(tail != nullptr) {
            for (int i = 0; i < listNodes.size(); i++) {
                if (listNodes.at(i) == tail) {
                    return 1;
                }
            }
            listNodes.push_back(tail);
            tail = tail->next;
        }
        return 0;
    }
};