//// test.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
////
//
//
//#include <iostream>
//#include <Eigen\Dense>
//#include <string>
//#include <opencv2\opencv.hpp>
//#include <vector>
//int main()
//{
//	/*int* i = (int*)malloc(sizeof(int));
//	std::cout << i << std::endl;
//	std::cout << "Hello World!\n";
//	cv::Mat m = cv::imread("D:\\Testing  Code\\VoxelHashing\\DepthSensingCUDA\\aRaw.png",-1);
//	cv::Mat mm = cv::imread("D:\\Testing  Code\\VoxelHashing\\DepthSensingCUDA\\aRaw.png");
//	cv::imshow("", m);
//	cv::waitKey();*/
//	
//	int col = 0;
//	int row = 0;
//
//	int i = 0;
//	std::string s;
//	std::string line;
//	std::getline(std::cin, line);
//	while (i != line.length())
//	{
//		if (line[i] != ' ')
//		{
//			s += line[i];
//
//		}
//		else
//		{
//
//			row = (atoi(s.c_str()));
//			s.clear();
//		}
//		i++;
//	}
//	col = (atoi(s.c_str()));
//	line.clear();
//	s.clear();
//
//
//	std::vector<std::vector<int >> data;
//	std::vector<int> /
//	for (size_t r = 0; r < row; r++)
//	{
//		std::getline(std::cin, line);
//		std::vector<int> lineData;
//		int i = 0;
//		std::string s;
//		while (i != line.length())
//		{
//			if (line[i] != ' ')
//			{
//				s += line[i];
//
//			}
//			else
//			{
//
//				lineData.push_back(atoi(s.c_str()));
//				s.clear();
//			}
//			i++;
//		}
//		lineData.push_back(atoi(s.c_str()));
//		data.push_back(lineData);
//	}
//	s.clear();
//	std::vector<int> pos;
//	i = 0;
//	
//	std::getline(std::cin, line);
//	while (i != line.length())
//	{
//		if (line[i] != ' ')
//		{
//			s += line[i];
//
//		}
//		else
//		{
//
//			pos.push_back(atoi(s.c_str()));
//			s.clear();
//		}
//		i++;
//	}
//	pos.push_back(atoi(s.c_str()));
//
//	int m1 = pos[0];
//	int n1 = pos[1];
//	int m2 = pos[2];
//	int n2 = pos[3];
//	int index1 = m1 * col + n1;
//	int index2 = m2 * col + n2;
//
//
//	std::queue<int> q;
//	q.push(index1);
//	while (!q.empty())
//	{
//		int left = q.back() - 1;
//		if()
//	}
//}
//
//// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
//// 调试程序: F5 或调试 >“开始调试”菜单
//
//// 入门提示: 
////   1. 使用解决方案资源管理器窗口添加/管理文件
////   2. 使用团队资源管理器窗口连接到源代码管理
////   3. 使用输出窗口查看生成输出和其他消息
////   4. 使用错误列表窗口查看错误
////   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
////   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件


//#include<stdio.h>
//
//int main()
//
//{
//
//	unsigned char a = 0x8A;
//	int b;
//	b = (a<<3)+a;
//
//	printf("%d", b);
//
//	return 0;
//
//}

/*
// lock_guard example
#include <iostream>       // std::cout
#include <thread>         // std::thread
#include <mutex>          // std::mutex, std::lock_guard
#include <stdexcept>      // std::logic_error

std::mutex mtx;

void print_even(int x) {
	if (x % 2 == 0) std::cout << x << " is even\n";
	else throw (std::logic_error("not even"));
}

void print_thread_id(int id) {
	try {
		// using a local lock_guard to lock mtx guarantees unlocking on destruction / exception:
		std::lock_guard<std::mutex> lck(mtx);
		print_even(id);
	}
	catch (std::logic_error&) {
		std::cout << "[exception caught]\n";
	}
}

int main()
{
	std::thread threads[10];
	// spawn 10 threads:
	for (int i = 0; i < 10; ++i)
		threads[i] = std::thread(print_thread_id, i + 1);

	for (auto& th : threads) th.join();

	return 0;
}
*/


/*
#include <WinSock2.h>
#include <iostream>
#pragma comment(lib, "ws2_32.lib")

int main()
{
	WSADATA wsaData;
	int iRet = 0;
	iRet = WSAStartup(MAKEWORD(2, 2), &wsaData);
	if (iRet != 0)
	{
		std::cout << "WSAStartup(MAKEWORD(2, 2), &wsaData) execute failed!" << std::endl;
		return 0;
	}
}
*/

/*

#include <algorithm>
#include <set>
#include <string>

using namespace std;

int lengthOfLongestSubstring(string s) {
	///超时
	if(s == "") {
		return 0;
	}
	set<char> charSet;
	int max = 1;
	for (size_t j = 0; j < s.length(); j++)
	{
		int res = 1;
		charSet.insert(s[j]);
		for (size_t i = j + 1; i < s.length(); i++)
		{
			auto iter = charSet.find(s[i]);
			if(iter != charSet.end()) {
				break;
			}
			else {
				res++;
				charSet.insert(s[i]);
			}
		}
		if(res > max) {
			max = res;
		}
		charSet.clear();
	}
	return max;


	int res = 0;
	int i = 0, j = 0;
	int n = s.length();
	set<char> charSet;
	while (i < n && j < n) {
		if (charSet.find(s[j]) == charSet.end()) {
			charSet.insert(s[j++]);
			res = max(res, j - i);
		}
		else {
			charSet.erase(s[i++]);
		}
	}
	return res;
}

int main()
{
	string s = "gfreebg";
	int n = lengthOfLongestSubstring(s);

	return 0;

}
*/


/*
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;


int sg(string s)
{
	unordered_map<char, int> m;
	int res = 0, i = 0, j = 0;
	int n = s.length();
	for (; j < n; j++) {
		if (m.find(s[j]) != m.end()) {
			i = max(m[s[j]], i);
		}
		res = max(res, j - i + 1);
		m.insert({ s[ j], j + 1 });
		m[s[j]] = j + 1;
	}
	return res;
}

int main()
{
	string s("abcabcbb");
	int n = sg(s);
	return 1;
}
*/

/*
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
	vector<vector<int>> res;
	sort(nums.begin(), nums.end());
	for (size_t i = 0; i < nums.size(); i++)
	{
		for (size_t j = i + 1; j < nums.size(); j++)
		{
			for (size_t m = j + 1; m < nums.size(); m++)
			{
				for (size_t n = m + 1; n < nums.size(); n++)
				{
					if (nums[i] + nums[j] + nums[m] + nums[n] == target)
					{
						vector<int> r;
						r.push_back(nums[i]);
						r.push_back(nums[j]);
						r.push_back(nums[m]);
						r.push_back(nums[n]);
						res.push_back(r);
					}
				}

			}

		}

	}
	return res;
}

int main()
{


	std::cout << _MSC_VER;

		vector<int> r = { -3, -2, -1, 0, 0, 1, 2, 3 };
	auto res = fourSum(r, 0);
	system("pause");
}
*/



/*
#include <string>
#include <vector>
#include <iostream>

int calc(std::string str)
{
	int index = 0;
	std::string iStr;
	iStr.clear();
	std::vector<int> v_num;
	std::vector<char> v_operator;
	int tmpNum;
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] != '*' && str[i] != '+' && str[i] != '-')
		{
			iStr += str[i];
		}
		else
		{
			v_num.push_back(std::stoi(iStr));
			v_operator.push_back(str[i]);
			iStr.clear();
		}
	}
	v_num.push_back(std::stoi(iStr));

	std::vector<int> v_plus;
	std::vector<std::vector<int>> v_mul;
	for (size_t i = 0; i < v_operator.size(); i++)
	{
		if (v_operator[i] == '*')
		{
			v_num[i] *= v_num[i + 1];
			v_num.erase(v_num.begin() + i + 1);
			v_operator.erase(v_operator.begin() + i);
			i--;
		}
	}

	int result = v_num[0];
	for (size_t i = 0; i < v_operator.size(); i++)
	{
		if (v_operator[i] == '+')
		{
			result += v_num[i + 1];
		}
		if (v_operator[i] == '-')
		{
			result -= v_num[i + 1];
		}
	}

	//system("pause");
	return result;
}

int main()
{

	std::vector<std::string> v_str;
	std::string tmpStr;
	while (std::getline(std::cin, tmpStr))
	{
		if (tmpStr == "END")
		{
			break;
		}
		else
		{
			v_str.push_back(tmpStr);
		}
	}

	for (size_t i = 0; i < v_str.size(); i++)
	{
		std::cout<<calc(v_str[i])<<std::endl;
	}
	system("pause");
}
*/


/*
#include <iostream>
#include <string>

int main()
{
	std::string input;
	std::getline(std::cin, input);

	std::string v1, v2;
	for (size_t i = 0; i < input.length(); i++)
	{
		if (input[i] == ' ')
		{
			v1 = input.substr(0, i);
			v2 = input.substr(i + 1, input.length());
		}
	}

	int v11, v12, v21, v22;
	for (size_t i = 0; i < v1.length(); i++)
	{
		if (v1[i] == '.')
		{
			v11 = std::stoi(v1.substr(0, i));
			v12 = std::stoi(v1.substr(i + 1, v1.length()));
		}
	}

	for (size_t i = 0; i < v2.length(); i++)
	{
		if (v2[i] == '.')
		{
			v21 = std::stoi(v1.substr(0, i));
			v22 = std::stoi(v1.substr(i + 1, v1.length()));
		}
	}

	if (v11 > v21)
		return 1;
	if (v11 < v21)
		return -1;
	if (v12 > v22)
		return 1;
	if (v12 < v22)
		return -1;
	return 0;
}

*/


/*
#include <string>

int main()
{
	std::string s = "12345";
	auto i = s.find('5');
	i = s.find('6',i);
	system("pause");


}
*/

//小米食堂每年都会举办一次厨艺大赛，假设参赛的厨师一共有n位（n < 1000），比赛结束后没有公布评分，
//但是站在领奖台上的一排厨师中每位厨师都能看到与自己相邻的厨师（左或者右）里评分比自己低（看不到比自己分数高的人的分数）的评分。
//比赛结束之后要发奖金，以1K为单位，每位厨师至少会发1K的奖金，另外，如果一个厨师发现自己的奖金没有高于比自己评分低的厨师的奖金，
//就会不满意，作为比赛组织方，小米食堂至少需要发放多少奖金才能让所有厨师满意。

/*
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
	std::string input;
	std::vector<int> score;
	int num = 0;
	std::cin >> num;
	if (num == 0)
	{
		std::cout << "0";
	}
	std::vector<int> salary(num, 1);
	while (num--)
	{
		int singleScore;
		std::cin >> singleScore;
		score.push_back(singleScore);
	}

	//std::sort(score.begin(), score.end());

	for (size_t i = 1; i < score.size(); i++)
	{
		if (score[i] < score[i - 1] && salary[i] >= salary[i - 1])
		{
			salary[i - 1] = salary[i] + 1;
			i = 1;
		}
		if (score[i] > score[i - 1] && salary[i] <= salary[i - 1])
		{
			salary[i] = salary[i - 1] + 1;
			i = 1;
		}

	}
	int sum = 0;
	for (size_t i = 0; i < salary.size(); i++)
	{
		sum += salary[i];
	}
	std::cout << sum;

	system("pasue");
}

*/

/*
#include <string>
#include <vector>
#include <iostream>


int main()
{
	std::vector<int> nums(4);
	int target;
	for (size_t i = 0; i < 4; i++)
	{
		std::cin >> nums[i];
	}
	std::cin >> target;


	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (i == j)
			{
				continue;
			}
			for (size_t m = 0; m < 4; m++)
			{
				if (m == i || m == j)
				{
					continue;
				}

				for (size_t n = 0; n < 4; n++)
				{
					if (n == m || n == j || n == i)
					{
						continue;
					}
					//std::cout << i << j << m << n << std::endl;
					if (nums[i] + nums[j] + nums[m] + nums[n] == target)
						std::cout << "1";
					if (nums[i] + nums[j] + nums[m] - nums[n] == target)
						std::cout << "1";
					if (nums[i] + nums[j] - nums[m] + nums[n] == target)
						std::cout << "1";
					if (nums[i] + nums[j] - nums[m] - nums[n] == target)
						std::cout << "1";
					if (nums[i] - nums[j] + nums[m] + nums[n] == target)
						std::cout << "1";
					if (nums[i] - nums[j] + nums[m] - nums[n] == target)
						std::cout << "1";
					if (nums[i] - nums[j] - nums[m] + nums[n] == target)
						std::cout << "1";
					if (nums[i] - nums[j] - nums[m] - nums[n] == target)
						std::cout << "1";

					if (nums[i] + nums[j] + nums[m] * nums[n] == target)
						std::cout << "1";
					if (nums[i] + nums[j] * nums[m] + nums[n] == target)
						std::cout << "1";
					if (nums[i] + nums[j] * nums[m] * nums[n] == target)
						std::cout << "1";
					if (nums[i] * nums[j] + nums[m] + nums[n] == target)
						std::cout << "1";
					if (nums[i] * nums[j] + nums[m] * nums[n] == target)
						std::cout << "1";
					if (nums[i] * nums[j] * nums[m] + nums[n] == target)
						std::cout << "1";
					if (nums[i] * nums[j] * nums[m] * nums[n] == target)
						std::cout << "1";


					if (nums[i] + nums[j] + nums[m] / nums[n] == target)
						std::cout << "1";
					if (nums[i] + nums[j] / nums[m] + nums[n] == target)
						std::cout << "1";
					if (nums[i] + nums[j] / nums[m] / nums[n] == target)
						std::cout << "1";
					if (nums[i] / nums[j] + nums[m] + nums[n] == target)
						std::cout << "1";
					if (nums[i] / nums[j] + nums[m] / nums[n] == target)
						std::cout << "1";
					if (nums[i] / nums[j] / nums[m] + nums[n] == target)
						std::cout << "1";
					if (nums[i] / nums[j] / nums[m] / nums[n] == target)
						std::cout << "1";
					if (nums[i] - nums[j] - nums[m] - nums[n] == target)
						std::cout << "1";

					if (nums[i] + nums[j] + nums[m] + nums[n] == target)
						std::cout << "1";
					if (nums[i] + nums[j] + nums[m] - nums[n] == target)
						std::cout << "1";
					if (nums[i] + nums[j] - nums[m] + nums[n] == target)
						std::cout << "1";
					if (nums[i] + nums[j] - nums[m] - nums[n] == target)
						std::cout << "1";
					if (nums[i] - nums[j] + nums[m] + nums[n] == target)
						std::cout << "1";
					if (nums[i] - nums[j] + nums[m] - nums[n] == target)
						std::cout << "1";
					if (nums[i] - nums[j] - nums[m] + nums[n] == target)
						std::cout << "1";
					if (nums[i] - nums[j] - nums[m] - nums[n] == target)
						std::cout << "1";

					if (nums[i] + nums[j] + nums[m] + nums[n] == target)
						std::cout << "1";
					if (nums[i] + nums[j] + nums[m] - nums[n] == target)
						std::cout << "1";
					if (nums[i] + nums[j] - nums[m] + nums[n] == target)
						std::cout << "1";
					if (nums[i] + nums[j] - nums[m] - nums[n] == target)
						std::cout << "1";
					if (nums[i] - nums[j] + nums[m] + nums[n] == target)
						std::cout << "1";
					if (nums[i] - nums[j] + nums[m] - nums[n] == target)
						std::cout << "1";
					if (nums[i] - nums[j] - nums[m] + nums[n] == target)
						std::cout << "1";
					if (nums[i] - nums[j] - nums[m] - nums[n] == target)
						std::cout << "1";

					if (nums[i] + nums[j] + nums[m] + nums[n] == target)
						std::cout << "1";
					if (nums[i] + nums[j] + nums[m] - nums[n] == target)
						std::cout << "1";
					if (nums[i] + nums[j] - nums[m] + nums[n] == target)
						std::cout << "1";
					if (nums[i] + nums[j] - nums[m] - nums[n] == target)
						std::cout << "1";
					if (nums[i] - nums[j] + nums[m] + nums[n] == target)
						std::cout << "1";
					if (nums[i] - nums[j] + nums[m] - nums[n] == target)
						std::cout << "1";
					if (nums[i] - nums[j] - nums[m] + nums[n] == target)
						std::cout << "1";
					if (nums[i] - nums[j] - nums[m] - nums[n] == target)
						std::cout << "1";

					if (nums[i] + nums[j] + nums[m] + nums[n] == target)
						std::cout << "1";
					if (nums[i] + nums[j] + nums[m] - nums[n] == target)
						std::cout << "1";
					if (nums[i] + nums[j] - nums[m] + nums[n] == target)
						std::cout << "1";
					if (nums[i] + nums[j] - nums[m] - nums[n] == target)
						std::cout << "1";
					if (nums[i] - nums[j] + nums[m] + nums[n] == target)
						std::cout << "1";
					if (nums[i] - nums[j] + nums[m] - nums[n] == target)
						std::cout << "1";
					if (nums[i] - nums[j] - nums[m] + nums[n] == target)
						std::cout << "1";
					if (nums[i] - nums[j] - nums[m] - nums[n] == target)
						std::cout << "1";

					if (nums[i] + nums[j] + nums[m] + nums[n] == target)
						std::cout << "1";
					if (nums[i] + nums[j] + nums[m] - nums[n] == target)
						std::cout << "1";
					if (nums[i] + nums[j] - nums[m] + nums[n] == target)
						std::cout << "1";
					if (nums[i] + nums[j] - nums[m] - nums[n] == target)
						std::cout << "1";
					if (nums[i] - nums[j] + nums[m] + nums[n] == target)
						std::cout << "1";
					if (nums[i] - nums[j] + nums[m] - nums[n] == target)
						std::cout << "1";
					if (nums[i] - nums[j] - nums[m] + nums[n] == target)
						std::cout << "1";
					if (nums[i] - nums[j] - nums[m] - nums[n] == target)
						std::cout << "1";

					if (nums[i] + nums[j] + nums[m] + nums[n] == target)
						std::cout << "1";
					if (nums[i] + nums[j] + nums[m] - nums[n] == target)
						std::cout << "1";
					if (nums[i] + nums[j] - nums[m] + nums[n] == target)
						std::cout << "1";
					if (nums[i] + nums[j] - nums[m] - nums[n] == target)
						std::cout << "1";
					if (nums[i] - nums[j] + nums[m] + nums[n] == target)
						std::cout << "1";
					if (nums[i] - nums[j] + nums[m] - nums[n] == target)
						std::cout << "1";
					if (nums[i] - nums[j] - nums[m] + nums[n] == target)
						std::cout << "1";
					if (nums[i] - nums[j] - nums[m] - nums[n] == target)
						std::cout << "1";
				}
			}
		}
	}
	std::cout << "0";
	system("pause");
}
*/

/*
#include <stdio.h>

int test()
{
	int k = 0;
	char c = 'A';
	do {
		switch (c++)
		{
		case 'A': k++; break;
		case 'B': k--;
		case 'C': k += 2; break;
		case 'D': k = k % 2; break;
		case 'E': k = k * 10; break;
		default: k = k / 3;
		}
		k++;
	} while (c < 'G');
	return k;
}

int main()
{
	auto i = test();
	char ch = -1;
	printf("% 02x, % 02x", ch, (unsigned char)ch);
	getchar();
}
*/




/*
#include<iostream>
using namespace std;
int nest(int i)
{
	if (i < 0)
		return 0;
	else if (i == 0)
		return 1;
	else
		return nest(i - 1) + nest(i - 2) + i;
}
int main()
{
	for (int i = -1; i <= 7; i++)
	{
		cout << nest(i) << endl;
	}
	return 1;
}
*/



/*
class B
{
public:
	virtual void Fun() {}
};
class D : public B
{
public:
	void Fun() {}
};
int main()
{
	D dd;
	B* pb = &dd;
	D* pd = &dd;
	pb->Fun();
	pd->Fun();
}
*/

/*
#include <stdio.h>
int main(void)
{
	enum team { my, your = 9, his, her = his + 3 };
	printf("%d %d %d %d\n", my, your, his, her);
	return 0;
}
*/

#include <string>
int main()
{
	std::string str1("trend");
	std::string str2("micro");
	std::string& strs = str1;
	std::string* ptrs = &str1;
	strs = str2;
	ptrs = &str2;
	int a = 0;
	int b = (a = -1) ? 2 : 3;
	int c = (a = 0) ? 2 : 3;
	return 0;
}