#include <vector>
#include <iostream>
#include "Solution.cpp"

int main() {
    Solution s;
    vector<int> prices = {7,1,5,3,6,4};

    cout << "\nResult: " << s.maxProfit(prices);

    return 0;
}