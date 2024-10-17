#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> noSingle = {};
    
    int singleNumber(vector<int>& nums) {
        int j = 0;

        for (int i = 0; i < nums.size() - 1; i++) {
            bool isSingleNum = isSingle(nums.at(i));
            j = i + 1;
            while (isSingleNum && j < nums.size()) {
                if (nums.at(i) == nums.at(j)) {
                    noSingle.push_back(nums.at(i));
                    isSingleNum = 0;
                    break;
                }
                j++;
            }
            if (isSingleNum) {
                return nums.at(i);
            }
        }
        return nums.at(nums.size() - 1);
    }

    bool isSingle(int num) {
        for (int i = 0; i < noSingle.size(); i++) {
            if (noSingle.at(i) == num) {
                return 0;
            }
        }
        return 1;
    }
    
};