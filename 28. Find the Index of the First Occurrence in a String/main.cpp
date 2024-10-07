#include <iostream>
#include <string>
#include <Solution.cpp>

using namespace std;

int main() {
    Solution s;
    string haystack = "mississippi", needle = "issipi";
    cout << s.strStr(haystack, needle);
    return 0;
}