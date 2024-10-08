#include <string>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int wordLength = 0;
        bool isSpace = 1;
        for (int i = 0; i < s.size(); i++) {
            if (s.at(i) != ' ') {
                wordLength = isSpace ? 1 : wordLength + 1;
                isSpace = 0;
            } else {
                isSpace = 1;
            }
        }
        return wordLength;
    }
};