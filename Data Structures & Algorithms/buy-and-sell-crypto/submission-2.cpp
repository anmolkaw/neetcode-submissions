class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;
        int right = 1;
        int maxProfit = 0;

        while(right < prices.size()){
           int profit = prices[right] - prices[left];

            maxProfit = max(maxProfit, profit);
            if(profit < 0){
                left = right;
                right++;
            }else{
                right++;
            }
        }

        return maxProfit;
    }
};
