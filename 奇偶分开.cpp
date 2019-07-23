//输入一个整数数组，实现一个函数来调整该数组中数字的顺序，使得所有的奇数位于数组的前半部分，
//所有的偶数位于数组的后半部分，并保证奇数和奇数，偶数和偶数之间的相对位置不变。

#include <vector>
#include <queue>

using namespace std;

void reOrderArray(vector<int> &array) {
	/*
	for(int i = 0; i < array.size(); i++) {
		if(aray[i] % 2 == 1) {
			continue;
		}
		else {
			queue<int> q;
			int index = i + 1;
			while(array[index] % != 1 && index < array.size()) {
				queue.push(array[index]);
				index++；
			}
			array[i + 1]
		}
	}
	*/
	queue<int> odd, even;
	for (int i = 0; i < array.size(); i++) {
		if (array[i] % 2 == 1) {
			odd.push(array[i]);
		}
		else {
			even.push(array[i]);
		}
	}
	for (int i = 0; i < array.size(); i++) {
		if (!odd.empty()) {
			int num = odd.front();
			odd.pop();
			array[i] = num;
			continue;
		}
		if (!even.empty()) {
			int num = even.front();
			even.pop();
			array[i] = num;
			continue;
		}
	}
}

int main()
{
	vector<int> v = { 1,2,3,4,5,6,7 };
	reOrderArray(v);
}