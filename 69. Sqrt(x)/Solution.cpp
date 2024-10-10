using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        int i = 0, pow = 0;
        while (pow < x) {
            if (i > 46340) {
                return 46340;
            }
            pow = i * i;
            i++;
        }
        return pow == 0 ? 
            0 :
            pow == x ? i - 1 : i - 2;        
    }
};