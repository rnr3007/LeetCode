#include <iostream>

using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result = "";

        while(columnNumber != 0) {
            int mod = columnNumber % 26;
            if (mod == 0) {
                result = "Z" + result;
                columnNumber -= 1;
            } else {
                result = (char) (mod + 64) + result;
            }
            columnNumber /= 26;
        }
        return result;
    }
};