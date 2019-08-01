#include <vector>
#include <algorithm>

int Partition(std::vector<int>&v, int start, int end)
{
	int pivot = v[end];
	
	int i = start;
	for (size_t j = start; j < end; j++)
	{
		if (v[j] <= pivot)
		{
			std::swap(v[i++], v[j]);
		}
	}
	std::swap(v[i], v[end]);
	return i;
}

void QuickSort(std::vector<int>& v, int start, int end)
{
	if (start < end)
	{
		int pivotIndex = Partition(v, start, end);
		QuickSort(v, start, pivotIndex - 1);
		QuickSort(v, pivotIndex + 1, end);
	}
}


int main()
{
	std::vector<int> v = { 9,8,7,6,5,4,3,2,1,0};
	QuickSort(v, 0, v.size() - 1);
	return 0;
}