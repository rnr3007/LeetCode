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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tailA = headA;
        ListNode* tailB = headB;

        while (tailA != nullptr && tailB != nullptr) {
            while (tailB != nullptr) {
                if (tailA == tailB) {
                    return tailA;
                }
                tailB = tailB -> next;
            }
            tailA = tailA -> next;
            tailB = headB;
        }

        return nullptr;
    }
};