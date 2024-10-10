#include <iostream>
#include <vector>
#include "struct.h"
#include "Solution.cpp"

using namespace std;

int main() {
    Solution s;
    
    vector<int> nums = {1, 2, 2, 5, 5, 6};
    ListNode* head = new ListNode(nums.at(0));
    ListNode* tail = head;

    for (int i = 1; i < nums.size(); i++){
        tail->next = new ListNode(nums.at(i));
        tail = tail->next;
    }

    head = s.deleteDuplicates(head);
    tail = head;
    cout << "\nResult: ";
    while (tail != nullptr) {
        cout << tail->val << " ";
        tail = tail->next;
    }

    return 0;
}