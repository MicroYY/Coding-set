#include <iostream>
#include <vector>
#include <algorithm>

bool cmp(int a, int b)
{
	return a < b;
}

int main()
{
	int n;
	std::string input;
	std::cin >> n;
	std::vector<int> nums;
	std::vector<char> operas;
	for (int i = 0; i < 2 * n - 1; i++) {
		if (i % 2 == 0) {
			int tmp;
			std::cin >> tmp;
			nums.push_back(tmp);
		}
		else {
			char tmp;
			std::cin >> tmp;
			operas.push_back(tmp);
		}
	}

	for (int i = 0; i < operas.size(); i++) {
		if (operas[i] == '+')
		{
			int j = i + 1;
			while (operas[j] == '+')
			{
				j++;
			}
			std::sort(nums.begin() + i, nums.begin() + j);
			i = j;
			//continue;
		}
		if (operas[i] == '*')
		{
			int j = i + 1;
			while (operas[j] == '*' && j < operas.size())
			{
				j++;
			}
			std::sort(nums.begin() + i, nums.begin() + j + 1,cmp);
			i = j;
			//continue;
		}
		
	}

	for (size_t i = 0; i < nums.size(); i++)
	{
		std::cout << nums[i];
		if (i != operas.size())
		{
			std::cout << " " <<operas[i] << " ";
		}
	}

	//std::getline(std::cin, input);
	return 0;
}