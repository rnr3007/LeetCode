#include <iostream>
#include <regex>
#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int ascii = 0, halfNewS = 0;
        string newS = "";

        for (int i = 0; i < s.size(); i++) {
            ascii = (int)s.at(i);
            if (ascii >= 65 && ascii <= 90) {
                newS += (char)(ascii + 32);
            } else if ((ascii >= 97 && ascii <= 122) || (ascii >= 48 && ascii <= 57)) {
                newS += s.at(i);
            }
        }

        halfNewS = newS.size() / 2 ;
        for (int i = 0; i < halfNewS; i++) {
            if (newS.at(i) != newS.at(newS.size() - 1 - i)) {
                return 0;
            }
        }

        return 1;
    }
};