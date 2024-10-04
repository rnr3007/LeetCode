#include <iostream>
#include <map>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        map<char, int> roman;
        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['L'] = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M'] = 1000;

        int currVal = roman[s.at(s.size() - 1)];
        int nextVal, result = currVal, negativer = 1;

        for (int i = s.size() - 2; i >= 0; i--) {
            nextVal = roman[s.at(i)];
            if (nextVal > currVal) {
                negativer = 1;
                result += nextVal;
            } else if (nextVal < currVal) {
                negativer = -1;
                result -= nextVal;
            } else {
                result += (nextVal * negativer);
            }
            currVal = nextVal;
        }

        return result;
    }
};