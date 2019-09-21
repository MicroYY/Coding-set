#include <iostream>
#include <vector>
#include <algorithm>

bool comp(int x, int y)
{
	return x > y;
}

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> v1;
	std::vector<int> v2;
	for (int i = 0; i < n; i++) {
		int tmp;
		std::cin >> tmp;
		v1.push_back(tmp);
	}
	for (int i = 0; i < n; i++) {
		int tmp;
		std::cin >> tmp;
		v2.push_back(tmp);
	}

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += v1[i];
	}
	std::sort(v2.begin(), v2.end(),comp);
	int bottle = 0;
	for (int i = 0; i < n; i++)
	{
		sum -= v2[i];
		if (sum <= 0)
		{
			bottle = i+1;
			break;
		}
	}

	return 0;
}