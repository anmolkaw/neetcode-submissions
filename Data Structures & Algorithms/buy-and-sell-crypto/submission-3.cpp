// Brute force approach
// Time Complexity - O(n^2)
// Space Complexity - O(1)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;
       // int right = left+1;
        int maxProfit = 0;

        while(left<prices.size()){
            int right = left + 1;
            while(right<prices.size()){
                int profit = prices[right] - prices[left];
                maxProfit = max(maxProfit, profit);
                right++;
            }
            left++;
        }

        return maxProfit;
        
    }
};
