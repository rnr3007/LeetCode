#include <iostream>
#include "struct.h"

using namespace std;

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Dummy node to simplify edge cases (e.g., one of the lists is empty)
        ListNode* dummy = new ListNode();
        ListNode* tail = dummy;

        // Merge lists while both have nodes remaining
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                tail->next = list1;
                list1 = list1->next;
            } else {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;  // Move tail to the last node
        }

        // Attach the remaining part of the list (if any)
        if (list1 != nullptr) {
            tail->next = list1;
        } else if (list2 != nullptr) {
            tail->next = list2;
        }

        // The merged list starts at dummy->next
        return dummy->next;
        // ListNode* tail1 = list1;
        // ListNode* tail2 = list2;
        // ListNode* result = nullptr;
        // ListNode* tailR = nullptr;
        // int temp;
        // bool isHigher;

        // while (tail1 != nullptr || tail2 != nullptr) {
        //     if (tail1 != nullptr && tail2 != nullptr) {
        //         isHigher = tail1->val > tail2->val;
        //         if (result == nullptr) {
        //             result = isHigher ? new ListNode(tail2->val) : new ListNode(tail1->val);
        //             result->next = isHigher ? new ListNode(tail1->val) : new ListNode(tail2->val);
        //             tailR = result;
        //             tailR = tailR->next;
        //         } else {
        //             temp = tailR->val;
        //             tailR->val = isHigher ? 
        //                 (temp > tail1->val || tail2->val <= temp ? tail2->val : temp) :
        //                 (temp > tail2->val || tail1->val <= temp ? tail1->val : temp);

        //             tailR->next = isHigher ?
        //                 (temp > tail1->val ? new ListNode(tail1->val) : 
        //                     (temp > tail2->val ? new ListNode(temp) : new ListNode(tail2->val))
        //                 ) :
        //                 (temp > tail2->val ? new ListNode(tail2->val) : 
        //                     (temp > tail1->val ? new ListNode(temp) : new ListNode(tail1->val))
        //                 );
                    
        //             tailR->next->next = isHigher ?
        //                 (temp > tail1->val ? new ListNode(temp) : new ListNode(tail1->val)) :
        //                 (temp > tail2->val ? new ListNode(temp) : new ListNode(tail2->val));
                    
        //             tailR = tailR->next->next;
        //         }
        //         tail1 = tail1->next;
        //         tail2 = tail2->next;
        //     } else if (tail1 != nullptr && tail2 == nullptr) {
        //         if (result == nullptr) {
        //             result = new ListNode(tail1->val);
        //             tailR = result;
        //         } else {
        //             temp = tailR->val;
        //             isHigher = tail1->val > temp;
        //             tailR->val = isHigher ? temp : tail1->val;
        //             tailR->next = isHigher ? new ListNode(tail1->val) : new ListNode(temp);
        //             tailR = tailR->next;
        //         }
        //         tail1 = tail1->next;
        //     } else if (tail1 == nullptr && tail2 != nullptr) {
        //         if (result == nullptr) {
        //             result = new ListNode(tail2->val);
        //             tailR = result;
        //         } else {
        //             temp = tailR->val;
        //             isHigher = tail2->val > temp;
        //             tailR->val = isHigher ? temp : tail2->val;
        //             tailR->next = isHigher ? new ListNode(tail2->val) : new ListNode(temp);
        //             tailR = tailR->next;
        //         }
        //         tail2 = tail2->next;
        //     }
        // }
        // return result;
    }
};