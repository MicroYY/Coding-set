/*
 * @lc app=leetcode.cn id=392 lang=cpp
 *
 * [392] 判断子序列
 */

// @lc code=start
class Solution {
public:
    bool isSubsequence(string s, string t) {
        /* 解法1
        int index = 0;
        for(int i = 0; i < t.size(); i++){
            if(s[index] == t[i]){
                index++;
                continue;
            }
        }
        return index == s.length() ? true : false;
        */

        int num1 = s.length();
        int num2 = t.length();

        //bool dp[num1 + 1][num2 + 1];
        vector<vector<bool>> dp(num1 + 1, vector<bool>(num2 + 1, false));
        //for(int i = 0; i <= num1; i++){
        //    dp[i][0] = true;
        //}
        

        for(int j = 0; j <= num2; j++){
            dp[0][j] = true;
        }
        for(int i = 1; i <= num1; i++){
            for(int j = 1; j <= num2; j++){
                if(s[i - 1] == t[j - 1]){
                    dp[i][j] = dp[i - 1][j - 1];
                }
                else{
                    dp[i][j] = dp[i][j - 1];
                }
            }
        }
        return dp[num1][num2];
    }
};
// @lc code=end

