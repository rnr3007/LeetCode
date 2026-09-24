#include <iostream>
#include "../0. Misc/structs.h"
#include "../0. Misc/utilities.h"

using namespace std;

class Solution {
    private:
        bool isMirror(TreeNode* left, TreeNode* right) {
            if (left == NULL && right == NULL) return true; // it is the least node in the branch
            if (left == NULL || right == NULL) return false; // imbalance mirror because only one of them is null
            return (left->val == right->val && isMirror(left->left, right->right) && isMirror(left->right, right->left)); // Recursive to check each tree node. The outer node will be compared with another outer node, and vice versa
        }

    public:
        bool isSymmetric(TreeNode* root) {
            if (root == NULL) return true; // root is nothing
            return isMirror(root->left, root->right);
        }
};