/*
 * @lc app=leetcode.cn id=85 lang=cpp
 *
 * [85] 最大矩形
 *
 * https://leetcode-cn.com/problems/maximal-rectangle/description/
 *
 * algorithms
 * Hard (41.01%)
 * Total Accepted:    2.6K
 * Total Submissions: 6.4K
 * Testcase Example:  '[["1","0","1","0","0"],["1","0","1","1","1"],["1","1","1","1","1"],["1","0","0","1","0"]]'
 *
 * 给定一个仅包含 0 和 1 的二维二进制矩阵，找出只包含 1 的最大矩形，并返回其面积。
 * 
 * 示例:
 * 
 * 输入:
 * [
 * ⁠ ["1","0","1","0","0"],
 * ⁠ ["1","0","1","1","1"],
 * ⁠ ["1","1","1","1","1"],
 * ⁠ ["1","0","0","1","0"]
 * ]
 * 输出: 6
 * 
 */
class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        if(row == 0 || col == 0) {
            return 0;
        }
        int max = 0;
        for(int i = 1; i < col; i++) {
            if(vector[0][i] == 0) {
                continue;
            }
            else {
                vector[0][i] += vector[0][i - 1];
                if(vector[0][i] > max) {
                    max = vector[0][i];
                }
            }
        }
        for(int i = 1; i < row; i++) {
            if(vector[i][0] == 0) {
                continue;
            }
            else {
                vector[i][0] += vector[i - 1][0];
                if(vector[i][0] > max) {
                    max = vector[i][0];
                }
            }
        }
        for(int i = 1; i < row; i++) {
            for(int j = 1; j < col; j++) {
                if(vector[i][j] == 0 ) {
                    continue;
                }
                int m = i, n = j;
                
            }
        }
    }
};

