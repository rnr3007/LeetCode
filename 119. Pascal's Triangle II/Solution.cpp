#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> result = {};
        vector<int> path = {};
        vector<int> tempVector = {};
        for (int i = 0; i < rowIndex + 1; i++) {
            if (i < 2) {
                path.push_back(1);
                result = path;
            } else {
                tempVector.resize(path.size() + 1, 1);
                for (int j = 0; j < path.size() - 1; j++) {
                    tempVector.at(j + 1) = path.at(j) + path.at(j + 1);
                }
                path = tempVector;
                result = path;
            }
        }
        return result;
    }
};