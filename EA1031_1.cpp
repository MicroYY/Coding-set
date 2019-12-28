#include <iostream>
#include <vector>

// AC 80%
int main()
{
	int n;
	std::cin >> n;
	if (n == 0) {
		std::cout << "1";
		return 0;
	}
	if (n == 1) {
		std::cout << "1";
		return 0;
	}

	std::vector<long long> dp(n + 1, 0);
	dp[0] = 1;
	dp[1] = 1;
	/*
	for (int i = 2; i <= n; i++) {
		if (i % 2 == 1) {
			for (int j = 0; j <= i / 2 - 1; j++) {
				dp[i] += (dp[j] * dp[i - 1 - j]);
			}
			dp[i] *= 2;
			dp[i] += dp[i / 2 - 1] * dp[i / 2 - 1];
		}
		else if (i % 2 == 0) {
			for (int j = 0; j < i / 2; j++) {
				dp[i] += (dp[j] * dp[i - 1 - j]);
			}
			dp[i] *= 2;
		}

	}
	*/
	for (size_t i = 2; i <= n; i++)
	{
		dp[i] = dp[i - 1] * (4 * i - 2) / (i + 1);
	}


	std::cout << dp[n];

	return 0;
}