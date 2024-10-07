#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0, i = 0;
        while (i < nums.size() - k) {
            if (nums[i] == val) {
                k++;
                for (int j = i; j < nums.size() - k; j++) {
                    nums[j] = nums[j + 1];
                }
            } else {
                i++;
            }
        }
        return nums.size() - k;
    }
};