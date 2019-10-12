#include <iostream>
#include <set>
#include <sstream>
#include <vector>
#include <queue>
int main()
{
	int n, m;
	std::cin >> n >> m;

	std::set<std::string> s;
	std::vector<std::string> sv;

	for (int i = 0; i < n; i++) {
		std::string tmp;
		std::cin >> tmp;
		s.insert(tmp);
		sv.push_back(tmp);
	}

	long long res = 0;

	for (int i = 0; i < sv.size(); i++)
	{
		for (int j = i + 1; j < sv.size(); j++)
		{
			std::string& s1 = sv[i];
			std::string& s2 = sv[j];
			for (int k = 1; k <= m; k++)
			{
				
				std::string tmp11 = s1.substr(0, k);
				std::string tmp12 = s1.substr(k, s1.length());
				std::string tmp21 = s2.substr(0, k);
				std::string tmp22 = s2.substr(k, s2.length());

				std::string ss1 = tmp11 + tmp22;
				if (s.find(ss1) == s.end())
				{
					s.insert(ss1);
					sv.push_back(ss1);
				}
				std::string ss2 = tmp21 + tmp12;
				if (s.find(ss2) == s.end())
				{
					s.insert(ss2);
					sv.push_back(ss2);
				}

			}
		}
	}


	std::cout << s.size();
	return 0;
}