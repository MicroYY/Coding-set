#include <iostream>
#include <vector>
#include <sstream>

// AC 75%

int main()
{
	int k;
	std::cin >> k;
	std::string str;
	std::cin >> str;

	std::vector<int> dp(str.length() + 1, 0);
	int tmp = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '1')
		{
			tmp++;
			dp[i + 1] = tmp;
		}
		else {
			dp[i + 1] = tmp;
		}
	}

	int ret = 0;
	for (int i = 1; i < dp.size(); i++)
	{
		for (int j = i; j < dp.size(); j++)
		{
			if (i == j && i == 1)
			{
				if (dp[i] == k )
				{
					ret++;
				}
			}
			else
			{
				if (dp[j] - dp[i - 1] == k)
				{
					ret++;
				}
				if (dp[j] - dp[i - 1] > k)
				{
					break;
				}
				if (dp[j] - dp[i - 1] < k)
				{
					continue;
				}
			}
		}
	}
	std::cout << ret;
	return 0;
}