//输入一个整数n (0 <= n < 1000000000) 求Fibonacci数第n项 f[n] 你只需要输出f[n]的后四 位，也就是 f[n] mod 10000的结果。
//Fibonacci数定义如下：f[0] = 0  f[1] = 1 f[i] = f[i - 1] + f[i - 2] (i >= 2) 
//输入描述 
//输入只有一行，包括一个整数n。 
//输出描述 
//输出只有一行，包括一个整数，表示f[n] mod 10000的结果。 
//不需要加前导零。 
//输入样例一 
//10 
//输出样例一 
//55 
//输入样例二 
//10000 
//输出样例二 
//6875 
//输入样例三 
//100000000 
//输出样例三 
//6875 

#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	if (n == 0)
	{
		std::cout << 0;
		return 0;
	}
	if (n == 1)
	{
		std::cout << 1;
		return 0;
	}
	int first = 0;
	int second = 1;
	int res;
	for (int i = 2; i <= n; i++)
	{
		res = first + second;
		while (res > 10000)
		{
			res -= 10000;
		}
		first = second;
		second = res;
		//std::cout << i << " " << res << std::endl;
	}
	std::cout << res;
	return 0;
}