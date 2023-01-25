class Solution {
public:
    int maxProfit(vector<int>& prices) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);


        int n = prices.size();

        int minPrice = INT_MAX;
        int maxProfit = 0;

        for(int i = 0 ; i < n; i++){
            // updating the minimum price
            if(prices[i] < minPrice){
                minPrice = prices[i];
            }
            // updating maxprofit
            else{
                maxProfit = max(maxProfit , prices[i] - minPrice);
            }
        }


        return maxProfit;
    }
};