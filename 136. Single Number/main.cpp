#include <iostream>
#include <vector>
#include "Solution.cpp"

using namespace std;

int main() {
    Solution s;
    vector<int> numbers = {1, 1, 3, 5, 3, 2, 2};

    cout << s.singleNumber(numbers);

    return 0;
}