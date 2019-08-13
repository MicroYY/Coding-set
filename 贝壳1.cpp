#include <iostream>
#include <vector>
#include <numeric>
#include <limits>
#include <string>

using namespace std;


/*请完成下面这个函数，实现题目要求的功能
当然，你也可以不按照下面这个模板来作答，完全按照自己的想法来 ^-^
******************************开始写代码******************************/
string GetResult(int K) {
	int n = 1;
	double sum = 1;
	while (sum <= K) {
		n++;
		sum += (1.0 / n);
	}
	return to_string(n);
}
/******************************结束写代码******************************/


int main() {
	string res;

	int _K;
	cin >> _K;
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');



	res = GetResult(_K);
	cout << res << endl;

	return 0;

}
