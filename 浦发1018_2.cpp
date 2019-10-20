#include <iostream>
using namespace std;
#include <sstream>

int main()
{
	int cols = 0, rows = 0;
	int a;
	bool semicolon = false;
	char ch[100];
	for (int i = 0; i < 100000; i++)
	{
		cin.getline(ch, 99);
		if (strlen(ch) == 0)
		{
			break;
		}
		istringstream sin(ch);
		char c;
		while (sin)
		{
			if (sin >> a)
			{
				if (rows < 1)
					++cols;
			}
			else
			{
				sin.clear();
				c = sin.get();
				//cin.get();
				++rows;
			}
		}
	}
	

	return 0;
}