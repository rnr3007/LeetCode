#include <iostream>
#include "../0. Misc/structs.h"
#include "../0. Misc/utilities.h"

using namespace std;
class Solution {
    public:
        int maxDepth(TreeNode* root) {
            if (root == NULL) return 0;
            int maxLeft = maxDepth(root->left);
            int maxRight = maxDepth(root->right);
            return max(maxLeft, maxRight) + 1;
        }
};