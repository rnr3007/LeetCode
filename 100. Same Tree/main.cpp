#include <iostream>
#include <vector>
#include "Solution.cpp"
#include "../0. Misc/structs.h"
#include "../0. Misc/utilities.h"

using namespace std;

int main(){
    vector<int> l1Vector = {1, NULL, 3};
    vector<int> l2Vector = {1, NULL, 3};

    TreeNode* t1 = buildTree(l1Vector);
    TreeNode* t2 = buildTree(l2Vector);

    Solution s;
    cout << s.isSameTree(t1, t2);
    return 0;
}