#include <iostream>
#include <vector>
#include <algorithm>

#include <set>
// AC 41.18%

int main()
{
	int n;
	std::cin >> n;
	
	std::set<int> s;
	for (int i = 0; i < n; i++)
	{
		int tmp;
		std::cin >> tmp;
		
		if (s.find(tmp) == s.end())
		{
			s.insert(tmp);
		}
		else
		{
			s.erase(tmp);
		}
	}

	while (s.size() != 1)
	{
		auto i = s.end();
		i--;
		int a = *i;
		s.erase(*i);
		i = s.end();
		i--;
		int b = *i;
		s.erase(*i);
		int tmp = a - b;
		if (s.find(tmp) == s.end())
		{
			s.insert(tmp);
		}
		else
		{
			s.erase(tmp);
		}
	}
	

	std::cout << *s.begin();
	return 0;
}