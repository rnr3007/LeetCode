#include <iostream>
#include <string>

using namespace std;
#include <Solution.cpp>

int main() {
    Solution s;
    // string parentheses = "(([]){})";
    string parentheses = "()[][][{}]";

    cout << "result: \n" << s.isValid(parentheses);
    return 0;
}