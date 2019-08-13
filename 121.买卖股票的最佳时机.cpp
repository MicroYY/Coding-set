/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        /*
        int n = prices.size();
        if(n == 0 || n == 1) {
            return 0;
        }
        int max = 0;
        int min = prices[0];
        for(int i = 1; i < n; i++) {
            int dif = prices[i] - min;
            if(dif >= 0) {
                max = std::max(max, dif);
            }
            else {
                min = prices[i];
            }
        }
        return max;
        */
       int n = prices.size();
       if(n == 0 || n == 1) {
           return 0;
       }
       int max = 0;
       vector<int> dp(n, 0);
       int min = prices[0];
       for(int i = 1; i < prices.size(); i++) {
           int dif = prices[i] - min;
           if(dif >= 0) {
               max = std::max(max, dif);
           }
           else {
               min = prices[i];
           }
           dp[i] = max;
       }
       return dp[n - 1];
    }
};

