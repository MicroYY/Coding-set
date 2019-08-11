#include <iostream>
#include <vector>

int main()
{
	/*
	std::vector<int> input;
	for(int i = 0; i < 10; i++) {
		int tmp;
		std::cin >> tmp;
		input.push(tmp);
	}
	int n, x;
	std::vector<int> res;
	int max = (input[0] + 1) * 10 - 1;
	int min = (input[0]) * 10;
	for(int i = 0; i < 10; i++) {

	}
	*/
	std::vector<int> input;
	for (int i = 0; i < 10; i++) {
		int tmp;
		std::cin >> tmp;
		input.push_back(tmp);
	}
	std::vector<int> res;
	int n = 1;
	int x = 1;
	std::vector < std::vector<int>> vv(1000, std::vector<int>(10, 0));
	while (n <= 10) {
		for (int i = 1; i <= n; i++)
		{
			if (i != n)
			{
				int num = n;
				while (num != 0) {
					vv[i - 1][num % 10]++;
					num /= 10;
				}
			}
			if (vv[i - 1] == input) {
				res.push_back(i);
			}
		}
		n++;
	}
	if (res.size() == 0) {
		std::cout << "NO ANSWER";
	}
	return 0;
}