/*
 * @lc app=leetcode.cn id=123 lang=cpp
 *
 * [123] 买卖股票的最佳时机 III
 */
class Solution {
public:
    int maxProfit(vector<int>& prices) {
<<<<<<< HEAD
        int n = prices.size();
        if(n == 0 || n == 1) {
            return 0;
        }

        vector<vector<int>> dp(n + 1, 0);
        int res = 0;
        int min = prices[0];

        for(int i = 2; i <= n; i++) {
            if(prices[i - 1] <= prices[i - 2]) {
                dp[i] = dp[i - 1];
            }
            else {
                dp[i] = max(dp[i - 1], prices[i - 1] - min);
                for(int j = i - 1; j > 0; j--) {
                    res = max(res, dp[j] + prices[i - 1] - prices[j - 1]);
                }
                min = std::min(min, prices[i - 1]);
            }
        }
        return res;
=======
        
>>>>>>> 309255b7738641946d920dcff2550a4f8a616335
    }
};

