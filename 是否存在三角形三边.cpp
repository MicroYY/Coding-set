//��һ��СM�õ���n��ľ��������֪��ÿ��ľ���ĳ��ȡ�
//�����������n��ľ����ѡ��3������Ϊ�����εı߹���һ�������Σ���������ж�һ�����ܷ��������� 

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