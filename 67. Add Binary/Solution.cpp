#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        string result = "", temp = "", carry = "";

        int iA = a.size() - 1, iB = b.size() - 1, oneAppearance = 0;
        cout << "\n" << a << "\n" << b;

        while(iA >= 0 || iB >= 0) {
            if (iA >= 0 && iB >= 0) {
                temp = carry + a.at(iA) + b.at(iB);
                iA--;
                iB--;
            } else if (iA >= 0 && iB == -1) {
                temp = carry + a.at(iA);
                iA--;
            } else if (iA == -1 && iB >= 0) {
                temp = carry + b.at(iB);
                iB--;
            }
            oneAppearance = countCharOccurences(temp, '1');
            result = oneAppearance % 2 == 0 ? "0" + result : "1" + result;
            cout << "\nTemp: " << temp << "\nOne: " << oneAppearance << "\nResult: " << result << "\n";
            carry = oneAppearance > 1 ? "1" : "";
        }
        return carry == "" ? result : "1" + result;
    }

private:
    int countCharOccurences(string s, char c) {
        int result = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s.at(i) == c) {
                result++;
            }
        }
        return result;
    }
};