#include <vector>
#include "struct.h"
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

using namespace std;

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        TreeNode* branchRoot = root;
        TreeNode* branchTemp;
        vector<int> result = {};
        while (branchRoot != nullptr) {
            if (branchRoot->left != nullptr) {
                branchTemp = branchRoot->left;
                while(branchTemp->right != nullptr && branchTemp->right != branchRoot){
                    branchTemp = branchTemp->right;
                }

                if (branchTemp->right == nullptr) {
                    branchTemp->right = branchRoot;
                    branchRoot = branchRoot->left;
                } else {
                    result.push_back(branchRoot->val);
                    branchTemp->right = nullptr;
                    branchRoot = branchRoot->right;
                }
            } else {
                result.push_back(branchRoot->val);
                branchRoot = branchRoot->right;
            }
            
        }
        return result;
    }
};