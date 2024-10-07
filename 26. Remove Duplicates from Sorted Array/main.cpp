#include <iostream>
#include <vector>
#include <Solution.cpp>

using namespace std;

int main() {
    Solution s;
    vector<int> nums = {1, 2, 2, 3};
    int k = s.removeDuplicates(nums);

    cout << "k: " << k << "\n";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    return 0;
}