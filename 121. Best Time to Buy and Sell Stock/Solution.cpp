#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, tempProfit = 0, lowestPrice = 0;

        for (int i = 0; i < prices.size() - 1; i++) {
            if (prices.at(i) < lowestPrice || i == 0) {
                lowestPrice = prices.at(i);
                for (int j = i + 1; j < prices.size(); j++) {
                    tempProfit = lowestPrice - prices.at(j);
                    if (tempProfit < profit) {
                        profit = tempProfit;
                    }
                }
                
            } 
            
        }
        return profit * -1;
    }
};