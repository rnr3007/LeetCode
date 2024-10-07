#include <iostream>
#include <vector>
#include <Solution.cpp>

int main() {
    Solution s;
    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;
    int k = s.removeElement(nums, val);
    
    cout << "k: " << k << "\n";
    for (int i = 0; i < nums.size() - k; i++) {
        cout << nums[i] << " ";
    }
}