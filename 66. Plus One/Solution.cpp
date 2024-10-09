#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 0, add = 0;
        for (int i = digits.size() - 1; i >= 0; i--) {
            add = i == digits.size() - 1 ? digits.at(i) + 1 + carry : digits.at(i) + carry;
            digits.at(i) = add % 10;
            carry = add / 10;
        }
        if (carry == 1) {
            digits.resize(digits.size() + 1);
            for (int i = digits.size() - 1; i >= 1; i--) {
                digits.at(i) = digits.at(i - 1);
            }
            digits.at(0) = 1;
        }
        return digits;
    }
};