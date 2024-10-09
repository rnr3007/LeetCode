#include <iostream>
#include <vector>
#include <Solution.cpp>

using namespace std;

int main() {
    Solution s;
    vector<int> nums = {4,3,2,1};

    vector<int> result = s.plusOne(nums);

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    return 0;
}