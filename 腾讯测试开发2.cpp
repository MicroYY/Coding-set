#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

int calc(std::vector<int> nums)
{
	int ret = 0;
	for (int i = 0; i < nums.size(); i++)
	{
		for (int j = i + 1; j < nums.size(); j++)
		{
			if (nums[i] > nums[j])
			{
				ret++;
			}
		}
	}
	return ret;
}

void reverse(std::vector<int>& nums, int q)
{
	int meizurenshu = pow(2, q);
	int zushu = nums.size() / meizurenshu;
	for (int i = 0; i < zushu; i++)
	{
		for (int j = 0; j < meizurenshu / 2; j++)
		{
			std::swap(nums[i * meizurenshu + j], nums[i * meizurenshu + meizurenshu - j - 1]);
		}
	}
	std::cout << calc(nums)<<std::endl;
}


int main()
{
	int n;
	std::cin >> n;

	std::vector<int> nums;
	for (int i = 0; i < pow(2, n); i++)
	{
		int tmp;
		std::cin >> tmp;
		nums.push_back(tmp);
	}

	int m;
	std::cin >> m;
	std::vector<int> boss;
	for (int i = 0; i < m; i++)
	{
		int tmp;
		std::cin >> tmp;
		boss.push_back(tmp);
	}

	for (int i = 0; i < m; i++)
	{
		reverse(nums, boss[i]);
	}

	return 0;
}