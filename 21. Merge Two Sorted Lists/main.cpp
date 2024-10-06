#include <iostream>
#include <vector>
#include "Solution.cpp"
#include "struct.h"

using namespace std;

int main() {
    Solution s;

    // vector<int> l1Vector = {-10,-6,-6,-6,-3,5};
    vector<int> l1Vector = {-2,-1,0,2,4,5,7,10,100};
    vector<int> l2Vector = {-9,-6,-3};

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

    ListNode* result = s.mergeTwoLists(l1, l2);

    cout << "\nResult: \n";
    while (result != nullptr) 
    {
        cout << result->val << " ";
        result = result->next;
    }

    return 0;
}