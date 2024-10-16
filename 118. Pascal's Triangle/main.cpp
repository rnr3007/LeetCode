#include <iostream>
#include <vector>
#include "Solution.cpp"

using namespace std;

int main() {
    int n = 10;
    Solution s;
    vector<vector<int>> result = s.generate(n);

    cout << "\nResult:\n[";
    for(int i = 0; i < result.size(); i++) {
        cout << "[";
        for (int j = 0; j < result.at(i).size(); j++) {
            cout << result.at(i).at(j) << " ";
        }
        cout << "] ";
    }
    cout << "]";

    return 0;
}