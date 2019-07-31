/*
 * @lc app=leetcode.cn id=18 lang=cpp
 *
 * [18] 四数之和
 */
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
    //     vector<vector<int>> res;
	// sort(nums.begin(), nums.end());
	// for (size_t i = 0; i < nums.size(); i++)
	// {
	// 	for (size_t j = i + 1; j < nums.size(); j++)
	// 	{
	// 		for (size_t m = j + 1; m < nums.size(); m++)
	// 		{
	// 			for (size_t n = m + 1; n < nums.size(); n++)
	// 			{
	// 				if (nums[i] + nums[j] + nums[m] + nums[n] == target)
	// 				{
	// 					vector<int> r;
	// 					r.push_back(nums[i]);
	// 					r.push_back(nums[j]);
	// 					r.push_back(nums[m]);
	// 					r.push_back(nums[n]);
	// 					res.push_back(r);
	// 				}
	// 			}

	// 		}

	// 	}

	// }
	// return res;
	vector<vector<int>> total;
        int n = nums.size();
        if(n<4)  return total;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-3;i++)
        {
            if(i>0&&nums[i]==nums[i-1]) continue;
            if(nums[i]+nums[i+1]+nums[i+2]+nums[i+3]>target) break;
            if(nums[i]+nums[n-3]+nums[n-2]+nums[n-1]<target) continue;
            for(int j=i+1;j<n-2;j++)
            {
                if(j>i+1&&nums[j]==nums[j-1]) continue;
                if(nums[i]+nums[j]+nums[j+1]+nums[j+2]>target) break;
                if(nums[i]+nums[j]+nums[n-2]+nums[n-1]<target) continue;
                int left=j+1,right=n-1;
                while(left<right){
                    int sum=nums[left]+nums[right]+nums[i]+nums[j];
                    if(sum<target) left++;
                    else if(sum>target) right--;
                    else{
                        total.push_back(vector<int>{nums[i],nums[j],nums[left],nums[right]});
                        do{left++;}while(nums[left]==nums[left-1]&&left<right);
                        do{right--;}while(nums[right]==nums[right+1]&&left<right);
                    }
                }
            }
        }
        return total;
    }
};

