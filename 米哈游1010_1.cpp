#include <iostream>
#include <vector>
#include <algorithm>

// AC 100%

int main()
{
	int N;
	std::cin >> N;
	
	std::vector<int> nums;
	for (int i = 0; i < N; i++)
	{
		int tmp;
		std::cin >> tmp;
		nums.push_back(tmp);
	}
	std::sort(nums.begin(), nums.end());

	int zero = 0;
	for (int i = 0; i < N; i++)
	{
		if (nums[i] == 0)
		{
			zero++;
		}
		else {
			break;
		}
	}

	int startIndex = zero;
	int endIndex = zero + 1;
	int res = 0;
	while (endIndex < N) {
		if (nums[endIndex] == nums[startIndex])
		{
			std::cout << "NO+" << zero;
			return 0;
		}
		res += nums[endIndex] - nums[startIndex] - 1;
		startIndex++;
		endIndex++;
	}
	
	bool b = (res <= zero) ? true : false;
	if (b)
	{
		std::cout << "YES+" << zero;
	}
	else
	{
		std::cout << "NO+" << zero;
	}

	return 0;

}