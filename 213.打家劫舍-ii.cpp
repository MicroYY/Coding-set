/*
 * @lc app=leetcode.cn id=213 lang=cpp
 *
 * [213] 打家劫舍 II
 */
class Solution {
public:
    int rob(vector<int>& nums) {
        /*
        int n = nums.size();
        if(n == 0) {
            return 0;
        }
        if(n == 1) {
            return nums[0];
        }
        vector<int> dp1(nums.begin(), nums.end() - 1);
        for(int i = 1; i < dp1.size(); i++) {
            int tmpMax;
            if(i == 1) {
                tmpMax = 0;
            }
            else {
                tmpMax = dp1[0];
            }
            for(int j = 1; j <= i - 2; j++) {
                tmpMax = std::max(tmpMax, dp1[j]);
            }
            dp1[i] += tmpMax;
        }

        vector<int> dp2(nums.begin() + 1, nums.end());
        for(int i = 1; i < dp2.size(); i++) {
            int tmpMax;
            if(i == 1) {
                tmpMax = 0;
            }
            else {
                tmpMax = dp2[0];
            }
            for(int j = 1; j <= i - 2; j++) {
                tmpMax = std::max(tmpMax, dp2[j]);
            }
            dp2[i] += tmpMax;
        }

        int res = 0;
        for(int i = 0; i < dp1.size(); i++) {
            res = std::max(res,dp1[i]);
            res = std::max(res,dp2[i]);
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

       vector<int> dp1(n + 1, 0);
       vector<int> dp2(n + 1, 0);
       for(int i = 2; i <= n; i++) {
           dp1[i] = max(dp1[i - 1], dp1[i - 2] + nums[i - 2]);
           dp2[i] = max(dp2[i - 1], dp2[i - 2] + nums[i - 1]);
       }
       return max(dp1[n], dp2[n]);
    }
};

