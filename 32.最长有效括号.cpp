/*
 * @lc app=leetcode.cn id=32 lang=cpp
 *
 * [32] 最长有效括号
 */
class Solution {
public:
    int longestValidParentheses(string s) {
        /*
        int n = s.length();
        if(n <= 1) {
            return 0;
        }

        vector<int> dp(n + 1, 0);
        for(int i = 0; i < n - 1; i++) {
            if(s[i] == '(') {
                if(s[i + 1] == ')') {
                    dp[i + 1] = dp[i] + 2;
                    dp[i + 2] = dp[i] + 2;
                    i++;
                }
                else {
                    dp[i + 1] = 0;
                }
            }
            else {
                dp[i + 1] = 0;
            }
        }
        int ret = dp[0];
        for(int i = 1; i < dp.size(); i++) {
            ret = max(ret, dp[i]);
        }
        return ret;
        */

        int n = s.length();
        if(n <= 1) {
            return 0;
        }
        vector<int> dp(n + 1, 0);
        for(int i = 1; i < n; i++) {
            if(s[i] == '(') {
                dp[i + 1] = 0;
            }
            else {
                for(int j = i - 1; j >= 0; j--) {
                    if(dp[j + 1] == 0) {
                        if (s[j] != '(') {
						    break;
					    }
                        dp[j + 1] = 1;
                        dp[i + 1] = 1;
                        break;
                    }
                    else {

                    }
                }
            }
        }

        int ret = 0;
        int tmp = 0;
        for(int i = 0; i < dp.size(); i++) {
            if(dp[i] == 1) {
                tmp++;
                ret = max(ret, tmp);
            }
            else{
                //ret = max(ret, tmp);
                tmp = 0;
            }
        }
        return ret;
    }
};

