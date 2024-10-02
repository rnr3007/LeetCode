#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result = {0, 0};
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums.at(i) + nums.at(j) == target) {
                    result.at(0) = i;
                    result.at(1) = j;
                    return result;
                }
            }
        }
        return result;
    }
};