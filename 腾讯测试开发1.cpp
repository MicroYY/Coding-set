#include <string>
#include <iostream>

std::string retrieval(std::string input)
{
	size_t end = input.find(']');
	if (end == std::string::npos)
	{
		return input;
	}
	size_t start;
	for (start = end - 1; start >= 0; start--)
	{
		if (input[start] == '[')
		{
			break;
		}
	}
	std::string tmp = input.substr(start + 1, end - start);
	size_t middle = tmp.find('|'); 
	int n = atoi(tmp.substr(0, middle - start).c_str());
	std::string tmpStr = tmp.substr(middle + 1, tmp.length() - middle - 2);

	std::string left = input.substr(0, start);
	for (int i = 0; i < n; i++)
	{
		left.append(tmpStr);
	}
	std::string right = input.substr(end + 1, input.length() - end);
	left.append(right);
	
	return retrieval(left);
}

// HG[3|B[2|CA]]F
int main()
{
	std::string input;
	std::getline(std::cin, input);
	auto res = retrieval(input);
	std::cout << res;
	return 0;
}