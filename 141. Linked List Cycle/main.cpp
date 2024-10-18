#include <iostream>
#include "struct.h"
#include "Solution.cpp"

using namespace std;

int main() {
    int pos = 3;
    vector<int> list = {3, 2, 0, -4};

    ListNode* head = new ListNode(list.at(0));
    ListNode* tail = head;
    ListNode* loop = head;

    for (int i = 0; i < list.size() - 1; i++) {
        loop = i == pos ? tail : loop;
        tail->next = new ListNode(list.at(i + 1));
        tail = tail->next;
    }

    if (pos > -1 && pos < list.size()) {
        tail->next = loop;
    }

    Solution s;
    cout << s.hasCycle(head);

    return 0;
}