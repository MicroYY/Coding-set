//有一天小M得到了n根木棍，并且知道每个木棍的长度。
//现在她想从这n根木棍中选出3根来作为三角形的边构成一个三角形，请你帮她判断一下她能否完成这件事 

#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (size_t i = 0; i < n; i++)
	{
		std::cin >> v[i];
	}
	sort(v.begin(), v.end());
	for (size_t i = 2; i < n; i++)
	{
		if (v[i - 2] + v[i - 1] > v[i])
		{
			std::cout << "possible";
			return 0;
		}
	}
	std::cout << "impossible";
	return 0;
}