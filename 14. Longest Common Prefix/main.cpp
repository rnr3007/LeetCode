#include <iostream>
#include <vector>
#include <Solution.cpp>

using namespace std;

int main () {
    Solution s;
    vector<string> strs = {"flower","aflow","flight"};

    cout << s.longestCommonPrefix(strs);
    return 0;
}