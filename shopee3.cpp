//��Linux Shell������ͨ���'*'��ʾ0�������ַ�, �ֱ�дһ�δ���ʵ��ͨ���'*'�Ĺ��ܣ�ע��ֻ��Ҫʵ��'*', ����ʵ������ͨ�����


//	��������	
//	o*m
//	shopeemobile.com

//	�������:
//	2 5
//	2 14
//	7 9
//	14 2

#include <string>
#include <iostream>


int main()
{
	std::string str1, str2;
	std::cin >> str1 >> str2;
	auto found = str1.find('*');
	if (found == std::string::npos)
	{
		std::cout << "-1" << " " << "0";
		return 0;
	}
	std::string str1_left = str1.substr(0, found);
	std::string str1_right = str1.substr(found + 1, str1.length());
	int len_l = str1_left.length();
	int len_r = str1_right.length();


	bool notFound = true;
	for (int l = 0; l + len_l <= str2.length(); l++)
	{
		std::string sub_str_l = str2.substr(l, len_l);
		if (sub_str_l == str1_left)
		{
			for (int r = l + len_l; r + len_r <= str2.length(); r++)
			{
				std::string sub_str_r = str2.substr(r, len_r);
				if (sub_str_r == str1_right)
				{
					std::cout << l << " " << r + len_r - l << std::endl;
					notFound = false;
				}
			}
		}
	}
	if (notFound)
	{
		std::cout << "-1" << " " << "0";
	}

	//std::cout << str1_left << " " << str1_right;
	system("pause");
}