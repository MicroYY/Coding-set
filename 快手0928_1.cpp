#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

// AC 100%
int main()
{
	int n, m;
	std::cin >> n >> m;
	std::vector<std::string> answer(n);
	//std::vector<int> v(5, 0);
	std::vector<int> score(m);
	for (int i = 0; i < n; i++)
	{
		std::string tmp;
		std::cin >> tmp;
		answer[i] = tmp;
	}

	

	for (int i = 0; i < m; i++)
	{
		int tmp;
		std::cin >> tmp;
		score[i] = tmp;
	}

	int ret = 0;
	for (int i = 0; i < m; i++)
	{
		std::vector<int> v(5, 0);
		for (int j = 0; j < n; j++)
		{
			if (answer[j][i] == 'A')
			{
				v[0] += 1;
			}
			if (answer[j][i] == 'B')
			{
				v[1] += 1;
			}
			if (answer[j][i] == 'C')
			{
				v[2] += 1;
			}
			if (answer[j][i] == 'D')
			{
				v[3] += 1;
			}
			if (answer[j][i] == 'E')
			{
				v[4] += 1;
			}
		}
		int max = v[0];
		for (int j = 1; j < 5; j++)
		{
			max = std::max(max, v[j]);
		}
		ret += max * score[i];
	}
	std::cout << ret;	
	return 0;
}