#include <iostream>
#include <vector>
#include <numeric>
#include <limits>
#include <string>

using namespace std;


/*������������������ʵ����ĿҪ��Ĺ���
��Ȼ����Ҳ���Բ������������ģ����������ȫ�����Լ����뷨�� ^-^
******************************��ʼд����******************************/
string GetResult(int K) {
	int n = 1;
	double sum = 1;
	while (sum <= K) {
		n++;
		sum += (1.0 / n);
	}
	return to_string(n);
}
/******************************����д����******************************/


int main() {
	string res;

	int _K;
	cin >> _K;
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');



	res = GetResult(_K);
	cout << res << endl;

	return 0;

}
