#include <iostream>
#include <vector>

// AC 100%

int main()
{

	int n;
	std::cin >> n;
	if (n <= 2)
	{
		std::cout << "0";
		return 0;
	}
	if (n == 3)
	{
		std::cout << "3";
		return 0;
	}

	std::vector<int> dp(n + 1);
	dp[0] = 0;
	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 2;
	//dp[4] = 8;
	for (int i = 4; i <= n; i++)
	{
		dp[i] = (i - 1)*(dp[i - 1] + dp[i - 2]);
	}
	std::cout << n * dp[n - 1];
	return 0;
}