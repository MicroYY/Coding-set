/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 */
class Solution {
public:
    string longestPalindrome(string s) {
        int length = s.length();
        if(length == 0 || length == 1) {
            return s;
        }
        int start = 0;
        int max = 1;

        //第一维代表字符串位置，第二维代表长度
        int** dp = new int*[length];
        for(int i = 0; i < length; i++) {
            dp[i] = new int[length];
        }
        for(int i = 0; i < length; i++) {
            dp[i][i] = 1;
            if(s[i] == s[i + 1] && i < length - 1) {
                dp[i][i + 1] = 1;
                max = 2;
                start  = i;
            }
        }
        for(int len = 3; len <= length; len++) {
            for(int i = 0; i + len - 1 < length; i++) {
                int j = i + len - 1;
                if(s[i] == s[j] && dp[i + 1][j - 1] == 1) {
                    dp[i][j] = 1;
                    start = i;
                    max = len;
                }
            }
        }
        return s.substr(start, max);

    }
};

