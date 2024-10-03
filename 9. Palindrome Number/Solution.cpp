#include <iostream>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        long lastDigit = 0, reversedNumber = 0, number = x;
        while (number > 0)
        {
            lastDigit = number % 10;
            reversedNumber = (reversedNumber * 10) + lastDigit;
            number = number / 10;
        }
        return reversedNumber == x;
    }
};