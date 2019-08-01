//甲刚开始有x的钱。每过一天，甲的钱会增加kx + 1这么多。问需要多少天，
//甲的钱会超过 10000000000000000。(0 <= x <= 1000000000000000000)  (0 <= k <= 100) 

#include <iostream>

int main()
{
	long long int x;
	int k;
	std::cin >> x >> k;
	10000000000000000;
	1000000000000000000;
	int day = 0;
	while (x < 10000000000000000)
	{
		x += k * x + 1;
		day++;
	}
	std::cout << day;
	return 0;
}