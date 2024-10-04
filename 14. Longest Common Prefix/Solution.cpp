#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int counter = 0;
        string result = "";
        if (strs.size() > 1) {
            while (true)
            {
                char holder;
                for (int i = 0; i < strs.size() - 1; i++) {
                    try {
                        if (strs.at(i).at(counter) != strs.at(i + 1).at(counter)) {
                            return result;
                        } else {
                            holder = strs.at(i).at(counter);
                        }
                    } catch (...) {
                        return result;
                    }
                }
                result += holder;
                counter++;
            }
        }
        return strs.at(0);
    }
};