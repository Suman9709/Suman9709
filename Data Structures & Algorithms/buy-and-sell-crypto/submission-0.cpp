class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int min_price = prices[0];

        for(int i = 0; i<prices.size(); i++){
            
            min_price = min(min_price, prices[i]);
            maxProfit = max(maxProfit, prices[i]-min_price);
        }
        return maxProfit;
    }
};
