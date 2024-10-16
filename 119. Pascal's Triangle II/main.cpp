#include <iostream>
#include <vector>
#include "Solution.cpp"

using namespace std;

int main() {
    int n = 10;
    Solution s;
    vector<int> result = s.getRow(n);

    cout << "\nResult:\n[";
    for(int i = 0; i < result.size(); i++) {
        cout << result.at(i) << " ";
    }
    cout << "]";

    return 0;
}