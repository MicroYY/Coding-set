/*
 * @lc app=leetcode.cn id=198 lang=cpp
 *
 * [198] 打家劫舍
 */
class Solution {
public:
    int rob(vector<int>& nums) {
        /*
        int n = nums.size();
        if (n == 0) {
            return 0;
        }
        vector<int> dp = nums;
        for (int i = 1; i < nums.size(); i++) {
            int max;
            if (i == 1) {
                max = 0;
            }
            else {
                max = dp[0];
            }
            for (int j = 1; j <= i - 2; j++) {
                max = std::max(max, dp[j]);
            }
            dp[i] = dp[i] + max;
            //dp[i] = std::max(dp[i], dp[i - 1]);
        }

        int res = dp[0];
        for (int i = 1; i < dp.size(); i++) {
            res = std::max(res, dp[i]);
        }
        return res;
        */

       int n = nums.size();
       if(n == 0) {
           return 0;
       }
       if(n == 1) {
           return nums[0];
       }

       vector<int> dp = nums;
       dp[1] = max(dp[0], dp[1]);
       for(int i = 2; i < n; i++) {
           dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
       }
       return dp[n - 1];
    }
};

