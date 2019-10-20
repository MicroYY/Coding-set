#include <iostream>

// AC 100%

int main()
{
	int n;
	std::cin >> n;
	int count = 0;
	int bit = 1;
	while (bit != 0) {
		if ((n & bit) != 0) {
			count++;
		}
		bit = bit << 1;
	}
	std::cout << count;
}