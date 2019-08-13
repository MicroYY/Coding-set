#include <vector>
#include <iostream>
#include <set>

/*
int main()
{
	int groups;
	std::cin >> groups;
	std::vector<int> res(groups, 1);
	for (int j = 0; j < groups; j++)
	{
		int num;
		std::cin >> num;
		std::vector<int> nums;
		for (int gNum = 0; gNum < num; gNum++)
		{
			int tmp;
			std::cin >> tmp;
			nums.push_back(tmp);
		}
		for (int gNum = 0; gNum <= num - 1; gNum++)
		{
			if (gNum == 0)
			{
				if (nums[0] > nums[1] + nums[num - 1])
				{
					res[j] = 0;
					//std::cout << "No" << std::endl;
					break;
				}
			}
			else if (gNum == num - 1)
			{
				if (nums[num - 1] > nums[0] + nums[num - 2])
				{
					res[j] = 0;
					//std::cout << "No" << std::endl;
					break;
				}
			}
			else {
				if (nums[gNum] > nums[gNum - 1] + nums[gNum + 1])
				{
					res[j] = 0;
					break;
				}
			}

		}

		

		//std::cout << "Yes" << std::endl;
	}
	for (size_t gNum = 0; gNum < res.size(); gNum++)
	{
		if (res[gNum] == 0)
		{
			std::cout << "No" << std::endl;
		}
		else
		{
		std::cout << "Yes" << std::endl;
		}
	}
	return 0;
}
*/

int main()
{
	int groups;
	std::cin >> groups;
	std::vector<int> res(groups, 1);
	for (size_t gNum = 0; gNum < groups; gNum++)
	{
		int num;
		std::cin >> num;
		std::vector<int> nums;
		for (size_t i = 0; i < num; i++)
		{
			int tmp;
			std::cin >> tmp;
			nums.push_back(tmp);
		}
		std::set<int> s;
		for (size_t i = 0; i < num; i++)
		{
			s.insert(nums[i]);
		}
		nums.clear();
		for (auto it = s.begin(); it != s.end(); ++it)
		{
			nums.push_back(*it);
		}
		for (size_t i = 0; i < nums.size(); i++)
		{
			if (i == 0)
			{
				if (nums[0] >= nums[1] + nums[nums.size() - 1])
				{
					res[gNum] = 0;
					break;
				}
			}
			else if (i == nums.size() - 1)
			{
				if (nums[i] >= nums[i - 1] + nums[0])
				{
					res[gNum] = 0;
					break;
				}
			}
			else
			{
				if (nums[i] >= nums[i - 1] + nums[i + 1])
				{
					res[gNum] = 0;
					break;
				}
			}
		}
	}
	for (size_t i = 0; i < res.size(); i++)
	{
		if (res[i] == 0)
		{
			std::cout << "No" << std::endl;
		}
		else
		{
			std::cout << "Yes" << std::endl;
		}
	}
	return 0;
}