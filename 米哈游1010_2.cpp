#include <iostream>
#include <vector>
#include <sstream>

// AC 60%

void detect(std::vector<std::string>& v, int R, int C)
{
	std::vector<std::vector<int>> flag(R, std::vector<int>(C, 0));
	for (int i = 0; i < R; i++)
	{
		for (int j = 1; j < C - 1; j++)
		{
			if (v[i][j] == v[i][j - 1] && v[i][j] == v[i][j + 1])
			{
				flag[i][j] = 1;
				flag[i][j - 1] = 1;
				flag[i][j + 1] = 1;
			}
		}
	}

	for (int i = 1; i < R - 1; i++)
	{
		for (int j = 0; j < R; j++)
		{
			if (v[i][j] == v[i - 1][j] && v[i][j] == v[i + 1][j])
			{
				flag[i][j] = 1;
				flag[i - 1][j] = 1;
				flag[i + 1][j] = 1;
			}
		}
	}

	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			if (flag[i][j] == 1)
			{
				v[i][j] = ' ';
			}
		}
	}

	
}

void erase(std::vector<std::string>& v,int R,int C)
{
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{

		}
	}
}

int main()
{
	int R, C;
	std::cin >> R >> C;

	std::vector<std::string> input;
	std::vector<int> op;
	for (int i = 0; i < R; i++)
	{
		std::string tmp;
		std::cin >> tmp;
		input.push_back(tmp);
	}

	for (int i = 0; i < 4; i++)
	{
		int tmp;
		std::cin >> tmp;
		op.push_back(tmp);
	}

	std::swap(input[op[0]][op[1]], input[op[2]][op[3]]);

	detect(input, R, C);
	erase(input,R,C);

	int res = 0;
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			if (input[i][j] == ' ')
			{
				res++;
			}
		}
	}
	std::cout << res;
	return 0;
}