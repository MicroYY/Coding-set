#include <vector>
#include <iostream>
#include <algorithm>

void BubbleSort(std::vector<int>& v)
{
	for (size_t i = 0; i < v.size(); i++)
	{
		for (size_t j = i + 1; j < v.size(); j++)
		{
			if (v[i] > v[j])
			{
				std::swap(v[i], v[j]);
			}
		}
	}
}

int main()
{
	std::vector<int> v = { 9,8,7,6,5,4,3,2,1,0,10 };
	BubbleSort(v);

	return 0;
}