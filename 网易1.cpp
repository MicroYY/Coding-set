#include <iostream>
#include <vector>

int main()
{
	int n;
	std::cin >> n;
	//int nums[n][n];
	std::vector<int> nums;
	for (int i = 0; i < n; i++)
	{
		int num;
		std::cin >> num;
		nums.push_back(num);
	}

	for (int i = 0; i < n; i++)
	{
		std::cout << n + 1 - nums[i] << " ";
	}
}