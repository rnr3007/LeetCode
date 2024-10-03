#include <iostream>
#include <Solution.cpp>

using namespace std;

int main() {
    Solution s;
    int number = 1221;

    bool isPalindrome = s.isPalindrome(number);

    cout << isPalindrome;

    return 0;
}