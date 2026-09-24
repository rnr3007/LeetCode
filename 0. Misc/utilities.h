#ifndef LC_UTILITIES_H
#define LC_UTILITIES_H

#include "structs.h"
#include <vector>
#include <queue>
#include <climits>
#include <iostream>

// Stand-in for LeetCode's "null", so you can write {1, null, 2}.
// Note: INT_MIN itself can't be used as a real node value.
const int null = INT_MIN;

// =====================================================================
//  Binary tree
// =====================================================================

/*
 * Build a tree from LeetCode's level-order format.
 *
 *   buildTree({1, 2, 3})       ->      1
 *                                     / \
 *                                    2   3
 *
 *   buildTree({1, null, 2})    ->    1
 *                                     \
 *                                      2
 */
inline TreeNode* buildTree(const std::vector<int>& vals) {
    if (vals.empty() || vals[0] == null) return nullptr;

    TreeNode* root = new TreeNode(vals[0]);
    std::queue<TreeNode*> q;   // nodes still waiting for their children
    q.push(root);
    size_t i = 1;

    while (!q.empty() && i < vals.size()) {
        TreeNode* node = q.front();
        q.pop();

        // left child
        if (i < vals.size() && vals[i] != null) {
            node->left = new TreeNode(vals[i]);
            q.push(node->left);
        }
        i++;

        // right child
        if (i < vals.size() && vals[i] != null) {
            node->right = new TreeNode(vals[i]);
            q.push(node->right);
        }
        i++;
    }
    return root;
}

// Print a tree in LeetCode's level-order format, e.g. [1,null,2]
inline void printTree(TreeNode* root) {
    std::vector<TreeNode*> order;
    std::queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
        TreeNode* node = q.front();
        q.pop();
        order.push_back(node);
        if (node) {
            q.push(node->left);
            q.push(node->right);
        }
    }
    // LeetCode drops trailing nulls
    while (!order.empty() && order.back() == nullptr) order.pop_back();

    std::cout << "[";
    for (size_t i = 0; i < order.size(); i++) {
        if (i > 0) std::cout << ",";
        if (order[i]) std::cout << order[i]->val;
        else          std::cout << "null";
    }
    std::cout << "]\n";
}

// Free every node in a tree
inline void deleteTree(TreeNode* root) {
    if (!root) return;
    deleteTree(root->left);
    deleteTree(root->right);
    delete root;
}

// =====================================================================
//  Linked list
// =====================================================================

// Build a linked list from a vector.
//   buildList({1, 2, 3})  ->  1 -> 2 -> 3
inline ListNode* buildList(const std::vector<int>& vals) {
    ListNode dummy;             // placeholder head: no "if first element" special case
    ListNode* tail = &dummy;
    for (int v : vals) {
        tail->next = new ListNode(v);
        tail = tail->next;
    }
    return dummy.next;
}

// Print a list in LeetCode's format, e.g. [1,2,3]
inline void printList(ListNode* head) {
    std::cout << "[";
    for (ListNode* cur = head; cur; cur = cur->next) {
        std::cout << cur->val;
        if (cur->next) std::cout << ",";
    }
    std::cout << "]\n";
}

// Free every node in a list
inline void deleteList(ListNode* head) {
    while (head) {
        ListNode* next = head->next;
        delete head;
        head = next;
    }
}

#endif