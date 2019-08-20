#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>



int main()
{
	int n, L;
	std::cin >> n >> L;

	std::vector<std::vector<int>> input;

	for (int i = 0; i < n; i++)
	{
		std::vector<int> v;
		int x, y;
		std::cin >> x >> y;
		v.push_back(x);
		v.push_back(y - x);
		input.push_back(v);
	}

	int start = input[0][0];
	int end = input[0][1];
	for (int i = 1; i < n; i++)
	{
		start = std::min(start, input[i][0]);
		end = std::max(end, input[i][1]);
	}
	if (start > 0)
	{
		std::cout << "-1";
		return 0;
	}
	int startFuel = input[0][1];

	int remainOil = startFuel;
	int pos = 0, res = 0;
	std::priority_queue<int> stationOil;
	while (remainOil < L)
	{
		for (int i = pos; i < input.size() && input[i][0] <= remainOil; ++i, ++pos)
		{
			stationOil .push(input[i][1]);
		}
		if (remainOil < L)
		{
			if (stationOil.empty())
				return -1;
			remainOil += stationOil.top();
			stationOil.pop();
			++res;
		}
	}
	std::cout << res;
	return 0;
}