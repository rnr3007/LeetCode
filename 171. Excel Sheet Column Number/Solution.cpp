#include <iostream>

using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        long long multiplier = 1, result = 0;
        for(int i = columnTitle.size() - 1; i >= 0; i--) {
            result += ((int)columnTitle.at(i) - 64) * multiplier;
            multiplier *= 26;
        }
        return result;
    }
};