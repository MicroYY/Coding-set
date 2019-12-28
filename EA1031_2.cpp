#include <iostream>
#include <vector>
#include <string>

// AC 63%
int main()
{
	int start, finish;
	std::string str;
	getline(std::cin, str);

	size_t found = str.find(",");
	std::string str1 = str.substr(0, found);
	std::string str2 = str.substr(found + 1, str.length());
	start = atoi(str1.c_str());
	finish = atoi(str2.c_str());
	int ret = 0;
	for (int i = start; i <= finish; i++) {
		int count0 = 0;
		int count1 = 0;
		long long bit = 1;
		while (bit <= i) {
			if ((bit & i) != 0) {
				count1++;
			}
			else { 
				count0++; 
			}
			bit = bit << 1;
		}
		if (count0 >= count1) {
			ret++;
		}
	}

	std::cout << ret;
	return 0;
}