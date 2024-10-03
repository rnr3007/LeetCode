#include <iostream>
#include "Solution.cpp"

using namespace std;

int main() {
    Solution solution;
    vector<int> nums = {3, 3, 4};
    int target = 6;

    vector<int> result = solution.twoSum(nums, target);

    for (int i = 0; i < result.size(); i++) {
        cout << solution.twoSum(nums, target).at(i) << " ";
    }
    return 0;
}