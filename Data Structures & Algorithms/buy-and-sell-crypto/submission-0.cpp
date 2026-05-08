class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp = 0;
        for(int i = 0; i < prices.size(); i++){
            int profit = 0;
            for(int j = i+1; j < prices.size(); j++){
                if(prices[j] > prices[i]){
                    profit = prices[j] - prices[i];
                    mp = max(mp, profit);
                }
            }
        }

        return mp;
    }
};
