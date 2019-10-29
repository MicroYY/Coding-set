/*
 * @lc app=leetcode.cn id=179 lang=cpp
 *
 * [179] 最大数
 */

// @lc code=start
class Solution {
public:
    string largestNumber(vector<int>& nums){
        sort(nums.begin(), nums.end(), [](int a, int b){
            return to_string(a) + to_string(b) > to_string(b) + to_string(a);});
        if(nums[0] == 0){
            return "0";
        }
        string ret;
        for(int i = 0; i< nums.size(); i++){
            ret += to_string(nums[i]);
        }
        return ret;
    }
};
// @lc code=end

