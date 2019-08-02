//����һ������n (0 <= n < 1000000000) ��Fibonacci����n�� f[n] ��ֻ��Ҫ���f[n]�ĺ��� λ��Ҳ���� f[n] mod 10000�Ľ����
//Fibonacci���������£�f[0] = 0  f[1] = 1 f[i] = f[i - 1] + f[i - 2] (i >= 2) 
//�������� 
//����ֻ��һ�У�����һ������n�� 
//������� 
//���ֻ��һ�У�����һ����������ʾf[n] mod 10000�Ľ���� 
//����Ҫ��ǰ���㡣 
//��������һ 
//10 
//�������һ 
//55 
//���������� 
//10000 
//��������� 
//6875 
//���������� 
//100000000 
//��������� 
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