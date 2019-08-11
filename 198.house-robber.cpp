/*
 * @lc app=leetcode id=198 lang=cpp
 *
 * [198] House Robber
 */
class Solution {
public:
    int rob(vector<int>& nums) {
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
            dp[i] = nums[i] + max;
            //dp[i] = std::max(dp[i], dp[i - 1]);
        }

        int res = dp[0];
        for (int i = 1; i < dp.size(); i++) {
            res = std::max(res, dp[i]);
        }
        return res;
    }
};

