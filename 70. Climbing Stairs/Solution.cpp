class Solution {
public:
    int climbStairs(int n) {
        int result = 1, temp = 1;
        for (int i = 1; i < n; i++) {
            int swapper = result;
            result += temp;
            temp = swapper;
        }
        return result;
    }
};