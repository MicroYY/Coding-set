/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        /* 超时
        if(s == "") {
            return 0;
        }
        set<char> charSet;
        int max = 1;
        for (size_t j = 0; j < s.length(); j++)
        {
            int res = 1;
            charSet.insert(s[j]);
            for (size_t i = j + 1; i < s.length(); i++)
            {
                auto iter = charSet.find(s[i]);
                if(iter != charSet.end()) {
                    break;
                }
                else {
                    res++;
                    charSet.insert(s[i]);
                }
            }
            if(res > max) {
                max = res;
            }
            charSet.clear();
        }
        return max;
        */

       /* 滑窗
       int res = 0;
       int i = 0, j = 0;
       int n = s.length();
       set<char> charSet;
       while(i < n && j < n) {
           if(charSet.find(s[j]) == charSet.end()) {
               charSet.insert(s[j++]);
               res = max(res, j - i);
           }
           else {
               charSet.erase(s[i++]);
           }
       }
       return res;
       */

      //优化的滑窗
      unordered_map<char, int> m;
	int res = 0, i = 0, j = 0;
	int n = s.length();
	for (; j < n; j++) {
		if (m.find(s[j]) != m.end()) {
			i = max(m[s[j]], i);
		}
		res = max(res, j - i + 1);
		m.insert({ s[ j], j + 1 });
		m[s[j]] = j + 1;
	}
	return res;
    }
};

