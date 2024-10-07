#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.size() <= haystack.size()) {
            for (int i = 0; i < haystack.size() - needle.size() + 1; i++) {
                int j = 0;
                while (j < needle.size()) {
                    if (haystack.at(i + j) == needle.at(j)) {
                        if (j == needle.size() - 1) {
                            return i;
                        }
                        j++;
                    } else {
                        break;
                    }
                }
            }
        }
        return -1;
    }
};