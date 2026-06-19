class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int profit = 0;

        for (int i = 0; i < prices.size() - 1; i++) {

            int buy = prices[i];
            int j = i + 1;

            while (j < prices.size()) {
                int sell = prices[j];
                if (sell - buy > profit)
                    profit = sell - buy;
                j++;
            }
            
        }

        return profit;
    }
};
