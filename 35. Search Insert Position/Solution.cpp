#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums.at(i) >= target) {
                return i == 0 ? 0 : i;
            }
        }
        return nums.size();
    }
};