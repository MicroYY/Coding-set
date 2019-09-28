#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
	int n;
	std::cin >> n;
	std::vector<int> score(n);
	for (int i = 0; i < n; i++)
	{
		int tmp;
		std::cin >> tmp;
		score[i] = tmp;
	}

	std::vector<int> time(n);
	for (int i = 0; i < n; i++)
	{
		int tmp;
		std::cin >> tmp;
		time[i] = tmp;
	}
	int total;
	std::cin >> total;

	int max = 0;
	std::vector<int> dp(total + 1);
	dp[0] = 0;
	int tmp;
	for (int i = 1; i <= n; i++)
	{
		for (int j = total; j > 0; j--)
		{
			if (j >= time[i - 1])
			{
				tmp = score[i - 1] + dp[j - time[i - 1]];
				dp[j] = std::max(dp[j], tmp);
			}
		}
	}
	std::cout << dp[total];

	return 0;
}