#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> printMatrix(vector<vector<int> > matrix) {
	int row = matrix.size();
	int col = matrix[0].size();
	int layer = (min(row, col) + 1) / 2;
	vector<int> res;
	for (int layerNum = 0; layerNum < layer; layerNum++)
	{
		//只有一列
		if ((0 + layerNum) == (col - 1 - layerNum))
		{
			for (int i = 0 + layerNum; i <= row - 1 - layerNum; i++)
			{
				res.push_back(matrix[i][layerNum]);
			}
			break;
		}
		//只有一行
		if ((0 + layerNum) == (row - 1 - layerNum))
		{
			for (int i = 0 + layerNum; i <= col - 1 - layerNum; i++)
			{
				res.push_back(matrix[layerNum][i]);
			}
			break;
		}
		for (int i = 0 + layerNum; i < col - layerNum; i++)
		{
			res.push_back(matrix[layerNum][i]);
		}
		for (int i = 1 + layerNum; i < row - layerNum; i++)
		{
			res.push_back(matrix[i][col - 1 - layerNum]);
		}
		for (int i = col - layerNum - 2; i >= 0 + layerNum; i--)
		{
			res.push_back(matrix[row - 1 - layerNum][i]);
		}
		for (int i = row - 2 - layerNum; i > 0 + layerNum; i--)
		{
			res.push_back(matrix[i][layerNum]);
		}
	}
	return res;
}

int main()
{
	vector<int> v1 = { 1,2 };
	vector<int> v2 = { 3,4 };
	vector<int> v3 = { 5,6 };
	vector<int> v4 = { 7,8 };
	vector<int> v5 = { 9,10 };
	vector < vector<int>> v = { v1,v2,v3,v4,v5 };
	auto res = printMatrix(v);
	system("pause");
}