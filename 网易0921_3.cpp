#include <iostream>
#include <vector>
#include <algorithm>

//AC 100%

int main()
{
	int T;
	std::cin >> T;
	for (int i = 0; i < T; i++)
	{
		int n;
		std::cin >> n;
		std::vector<int> nums(n);
		for (int j = 0; j < n; j++)
		{
			int tmp;
			std::cin >> tmp;
			nums[j] = tmp;
		}

		int* dp = new int[n + 1];
		dp[0] = 0;
		int lastSum = dp[0];
		for (int i = 1; i <= n; i++)
		{
			if (nums[i - 1] >= lastSum)
			{
				dp[i] = dp[i - 1] + 1;
				lastSum += nums[i - 1];
			}
			else
			{
				dp[i] = 1;
				lastSum = nums[i - 1];
			}
		}
		int res = dp[0];
		for (int i = 1; i <= n; i++)
		{
			res = std::max(res, dp[i]);
		}

		std::cout << res << std::endl;
	}


	return 0;
}