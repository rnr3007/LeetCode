#include <iostream>
#include <vector>
#include <Solution.cpp>

using namespace std;

int main() {
    Solution s;
    vector<int> nums = {1, 2, 2, 5};
    int target = 2;
    cout << s.searchInsert(nums, target);
    return 0;
}