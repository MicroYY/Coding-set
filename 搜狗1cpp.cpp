// ∆•≈‰Ip
// AC 100%

#include <iostream>
#include <sstream>
#include <vector>

bool match(std::string rule, std::string ip)
{
	std::size_t found = rule.find("*");
	if (found == 0)
	{
		std::string tmp = rule.substr(found + 1, rule.length());
		std::size_t found2 = ip.find(tmp);
		if (found2 != std::string::npos)
		{
			return true;
		}
		else {
			return false;
		}
	}
	else if(found == rule.length() - 1)
	{
		std::string tmp = rule.substr(0, found);
		std::size_t found2 = ip.find(tmp);
		if (found2 != std::string::npos)
		{
			return true;
		}
		else
		{
			return false;
		}
	} 
	else if (found == std::string::npos)
	{
		std::size_t found2 = ip.find(rule);
		if (found2 != std::string::npos)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return true;
}

int main()
{
	int N, M;
	std::cin >> N >> M;
	std::vector<std::string> rules;
	std::vector<std::string> ips;
	for (int i = 0; i < N; i++) {
		std::string s;
		std::cin >> s;
		rules.push_back(s);
	}
	
	for (size_t i = 0; i < M; i++)
	{
		std::string s;
		std::cin >> s;
		ips.push_back(s);
	}

	for (int i = 0; i < ips.size(); i++)
	{
		bool ret = false;
		for (int j = 0; j < rules.size(); j++)
		{
			ret = ret || match(rules[j], ips[i]);
		}
		if (ret)
		{
			std::cout << "1 ";
		}
		else {
			std::cout << "0 ";
		}
	}

	return 0;
}