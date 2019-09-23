#include <iostream>
#include <vector>
#include <numeric>

// AC 60%

bool exist(std::vector<int> nums, int sum)
{
	if (sum % 2 == 1)
	{
		return false;
	}
	
	int half = sum / 2;
	int n = nums.size();
	for (int p = 0; p < n; p++)
	{
		int current = nums[p];
		if (current < half)
		{

		}
		else if (current == half)
		{
			return true;
		}
		else
		{
			continue;
		}
		for (int q = p + 1; q < n; q++)
		{
			current += nums[q];
			if (current < half)
			{
				continue;
			}
			else if (current == half)
			{
				return true;
			}
			else
			{
				break;
			}
		}
	}
	return false;
}

int main()
{
	int T;
	std::cin >> T;
	for (int i = 0; i < T; i++)
	{
		int n;
		std::cin >> n;
		std::vector<int> nums(n);
		int sum = 0;
		for (int j = 0; j < n; j++)
		{
			int tmp;
			std::cin >> tmp;
			nums[j] = tmp;
			sum += tmp;
		}

	
		if (exist(nums, sum))
		{
			std::cout << "YES" << std::endl;
		}
		else
		{
			std::cout << "NO" << std::endl;
		}

		
	}
	return 0;
}