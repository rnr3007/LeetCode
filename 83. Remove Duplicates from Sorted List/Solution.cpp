#include "struct.h"
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* tailH = head;
        ListNode* result = new ListNode(-101);
        ListNode* tailR = result;
        while (tailH != nullptr) {
            if (tailR->val != tailH->val) {
                tailR->next = new ListNode(tailH->val);
                tailR = tailR->next;
            }
            tailH = tailH->next;
        }
        return result->next;
    }
};