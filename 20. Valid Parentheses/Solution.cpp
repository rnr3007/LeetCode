#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
    char getPair(char c) {
        if (c == ')') {
            return '(';
        } else if (c == '}') {
            return '{';
        } else if (c == ']') {
            return '[';
        }
        return '0';
    }

    bool isValid(string s) {
        string holder;
        char pair, nextPair;
        holder.insert(0, s.size(), '0');
        int i = 0, negativer = 1;
        if (s.size() % 2 == 0) {
            while(i < s.size()) {
                if (holder.at(i) == '0') {
                    if (getPair(s.at(i)) != '0') {
                        holder.at(i) = s.at(i);
                        pair = getPair(s.at(i));
                        negativer = -1;
                    } else if (negativer == -1) {
                        holder.at(i) = pair;
                        negativer = 1;
                    }
                }
                i += (1 * negativer);
            }
            return s == holder;
        }
        return false;
    }
};