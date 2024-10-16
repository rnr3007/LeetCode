#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result = {};
        vector<int> path = {};
        vector<int> tempVector = {};
        for (int i = 0; i < numRows; i++) {
            if (i < 2) {
                path.push_back(1);
                result.push_back(path);
            } else {
                tempVector.resize(path.size() + 1, 1);
                for (int j = 0; j < path.size() - 1; j++) {
                    tempVector.at(j + 1) = path.at(j) + path.at(j + 1);
                }
                path = tempVector;
                result.push_back(path);
            }
        }
        return result;
    }
};