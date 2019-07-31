/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子序和
 */
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) {
            return 0;
        }
        int* dp = new int[n];
        dp[0] = nums[0];
        int max = dp[0];
        for(int i = 1; i < n; i++) {
            if(dp[i - 1] < 0) {
                dp[i] = nums[i];
            }
            else {
                dp[i] = dp[i - 1] + nums[i];
            }
            max = std::max(max, dp[i]);
        }
        delete[] dp; 
        return max;
    }
};

