#include <iostream>
#include <vector>
#include <numeric>
#include <limits>
#include <algorithm>

using namespace std;


/*请完成下面这个函数，实现题目要求的功能
当然，你也可以不按照下面这个模板来作答，完全按照自己的想法来 ^-^
******************************开始写代码******************************/
int findMaxSubListLen(vector < int > A, vector < int > B) {
	vector<vector<int>> dp(1001, vector<int>(1001, 0));
	for (int i = 0; i <= B.size(); i++)
	{
		dp[0][i] = 0;
	}
	for (int i = 0; i <= A.size(); i++)
	{
		dp[i][0] = 0;
	}
	int ans = 0;
	for (int i = 1; i <= A.size(); i++)
	{
		for (int j = 1; j <= B.size(); j++)
		{
			//cout<<i<<" "<<j<<endl;
			if (A[i - 1] == B[j - 1])
			{
				dp[i][j] = dp[i - 1][j - 1] + 1;
				ans = std::max(ans, dp[i][j]);
			}
			else
			{
				dp[i][j] = 0;
			}
		}
	}
	return ans;

}
/******************************结束写代码******************************/


int main() {
	int num1, num2;

	std::cin >> num1;
	vector<int> v1(num1);
	for (int i = 0; i < num1; i++) {
		int tmp;
		std::cin >> tmp;
		v1.push_back(tmp);
	}
	std::cin >> num2;
	vector<int> v2;
	for (int i = 0; i < num2; i++) {
		int tmp;
		std::cin >> tmp;
		v2.push_back(tmp);
	}

	int res = findMaxSubListLen(v1, v2);
	std::cout << res;
	return 0;

}
