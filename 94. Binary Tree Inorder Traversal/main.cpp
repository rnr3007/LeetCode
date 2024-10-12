#include <iostream>
#include <vector>
#include "Solution.cpp"
#include "struct.h"

using namespace std;

void branchInputter(TreeNode* &tree, const vector<int>& input) {
    TreeNode* current = tree;  // Start at the root
    int i = 1;  // Start with the next index in the input

    // Keep track of current left and right branches to process
    vector<TreeNode*> nodeList = {current};

    while (i < input.size()) {
        TreeNode* node = nodeList.front();  // Get the current node from the list
        nodeList.erase(nodeList.begin());   // Remove it from the list

        // Process left child if it exists
        if (i < input.size() && input[i] != -101) {
            node->left = new TreeNode(input[i]);
            nodeList.push_back(node->left);  // Track this left child
        }
        i++;

        // Process right child if it exists
        if (i < input.size() && input[i] != -101) {
            node->right = new TreeNode(input[i]);
            nodeList.push_back(node->right);  // Track this right child
        }
        i++;
    }
};

int main() {
    Solution s;
    vector<int> input = {0, -101, 1, 2, 3, 2, 4, 5};
    TreeNode* tree = new TreeNode(input.at(0));

    branchInputter(tree, input);

    cout << "\nResult: ";
    vector<int> result = s.inorderTraversal(tree);
    for (int i = 0; i < result.size(); i++) {
        cout << " " << result.at(i);
    }

    return 0;
};

