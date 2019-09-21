// Éú³ÉÃÜÂë

#include <iostream>
#include <vector>

int main()
{
	int N, M;
	std::cin >> N >> M;
	std::vector<long long> nums(N, 0);
	for (int i = 1; i <= M; i++)
	{
		int L, R;
		std::cin >> L >> R;
		for (int j = L; j <= R; j++)
		{
			nums[j] = i;
		}

	}

	long long sum = 0;
	for (int i = 0; i < N; i++)
	{
		int len = i + 1;
		while (len < nums.size() && nums[len] == nums[i]  )
		{
			len++;
		}
		sum += (i + len) * (len - i) / 2 * nums[i];
	}
	std::cout << sum % 100000009;
	return 0;
}