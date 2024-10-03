#include <iostream>
#include <vector>
#include "Solution.cpp"
#include "struct.h"

using namespace std;

int main() {
    Solution s;

    vector<int> l1Vector = {2, 4, 3, 5, 6};
    vector<int> l2Vector = {5, 6, 4};

    ListNode* l1 = nullptr;
    ListNode* l2 = nullptr;
    ListNode* temp = nullptr;

    // Insert into l1
    for (int i = 0; i < l1Vector.size(); i++) {
        if (i == 0) {
            l1 = new ListNode(l1Vector.at(i));
            temp = l1;
        } else {
            temp->next = new ListNode(l1Vector.at(i));
            temp = temp->next;
        }
    }

    // Insert into l2
    for (int i = 0; i < l2Vector.size(); i++) {
        if (i == 0) {
            l2 = new ListNode(l2Vector.at(i));
            temp = l2;
        } else {
            temp->next = new ListNode(l2Vector.at(i));
            temp = temp->next;
        }
    }    

    ListNode* result = s.addTwoNumbers(l1, l2);

    cout << "\nresult\n";
    while (result != nullptr) 
    {
        cout << result->val << " ";
        result = result->next;
    }

    return 0;
}