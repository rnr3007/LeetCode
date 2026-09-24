#include <iostream>
#include <vector>
#include "../0. Misc/structs.h"
#include "../0. Misc/utilities.h"
#include "solution.cpp"

using namespace std;

int main() {
    vector<int> v1 = {1,2,2,null,3,3,null};

    TreeNode* t1 = buildTree(v1);

    Solution s;
    cout << s.isSymmetric(t1);

    return 0;
}