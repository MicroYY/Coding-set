//shopee的办公室非常大，小虾同学的位置坐落在右上角，而大门却在左下角，
//可以把所有位置抽象为一个网格（门口的坐标为0，0），小虾同学很聪明，每次只向上，
//或者向右走，因为这样最容易接近目的地，但是小虾同学不想让自己的boss们看到自己经常在他们面前出没，
//或者迟到被发现。他决定研究一下如果他不通过boss们的位置，他可以有多少种走法？

/*
垃圾方法。。。

#include <string>
#include <iostream>
#include <vector>
#include <set>

int calc(int x, int y, std::set<std::vector<int>>& boss)
{
	int res = 0;
	if (x == 0 && y == 0)
	{
		return 1;
	}
	if (x < 0)
	{
		return 0;
	}
	if (y < 0)
	{
		return 0;
	}
	std::vector<int> v = { x,y };
	if (boss.find(v) == boss.end())
	{
		;
	}
	else {
		return 0;
	}

	res += calc(x - 1, y, boss);
	res += calc(x, y - 1, boss);
	return res;
}

int main()
{
	int x, y, n;
	std::cin >> x >> y >> n;;
	//std::cin >> y;
	//std::cin >> n;

	std::set<std::vector<int>> boss;
	while (n)
	{
		std::vector<int> v;
		int xx, yy;
		std::cin >> xx >> yy;
		v.push_back(xx);
		v.push_back(yy);
		boss.insert(v);
		n--;
	}
	auto res = calc(x, y, boss);

	std::cout << res;
	system("pause");
}


*/


// DP
#include <iostream>
int main()
{
	int x, y, n;
	std::cin >> x >> y >> n;
	
	int **dp = new int*[x + 1];
	for (size_t i = 0; i < x + 1; i++)
	{
		dp[i] = new int[y + 1];
	}

	for (size_t i = 0; i < n; i++)
	{
		int x, y;
		std::cin >> x >> y;
		dp[x][y] = -1;
	}

	for (size_t i = 0; i <= x; i++)
	{
		dp[i][0] = 1;
	}
	for (size_t i = 0; i <= y ; i++)
	{
		dp[0][i] = 1;
	}

	for (size_t i = 1; i <= x; i++)
	{
		for (size_t j =	1; j <= y; j++)
		{
			if (dp[i][j] == -1)
			{
				continue;
			}
			if (dp[i - 1][j] != -1)
			{
				dp[i][j] += dp[i - 1][j];
			}
			if (dp[i][j - 1] != -1)
			{
				dp[i][j] += dp[i][j - 1];
			}
		}
	}
	std::cout << dp[x][y];
	//int boss[n + 1][n + 1];
	system("pause");
}