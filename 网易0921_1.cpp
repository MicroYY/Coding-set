#include <iostream>
#include <vector>
#include <cmath>

//AC 60%

int main()
{
	int T;
	std::cin >> T;
	for (int i = 0; i < T; i++)
	{
		unsigned long long x;
		unsigned long long n = 0;
		std::cin >> x;
		if (x <= 9)
		{
			n = x;
			std::cout << n << std::endl;
		}
		else
		{
			long long iter = 0;
			while (x > 9)
			{
				n += 9 * pow(10, iter);
				x -= 9;
				iter++;
			}
			n += x * pow(10, iter);
			std::cout << n << std::endl;
		}
	}

	return 0;
}