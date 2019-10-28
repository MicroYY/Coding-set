/*
 * @lc app=leetcode.cn id=378 lang=cpp
 *
 * [378] 有序矩阵中第K小的元素
 */

// @lc code=start
class Solution {
public:
    int countNum(vector<vector<int>>& matrix, int mid){
        int row = matrix.size();
        int col = matrix.size();

        int count = 0;
        //最后一行开始扫描
        int i = row - 1;
        int j = 0;
        while(i >= 0 && j < col){
            if(matrix[i][j] <= mid){
                //该元素上面的元素都不会比mid大，加上列数
                count += i + 1; 
                j++;
            }
            else{
                i--;
            }
        }
        return count;
    }

    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int row = matrix.size();
        int col = matrix[0].size();

        int left = matrix[0][0];
        int right = matrix[row - 1][col - 1];

        while(left < right){
            int mid = (left + right) / 2;
            int count = countNum(matrix, mid);

            if(count < k){
                left = mid + 1;
            }
            else{
                right = mid;
            }
        }
        return right;
    }
};
// @lc code=end

