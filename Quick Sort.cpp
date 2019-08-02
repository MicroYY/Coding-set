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

void QSort(std::vector<int>& v, int start, int end)
{
	if (start < end)
	{
		int pivotIndex = Partition(v, start, end);
		QSort(v, start, pivotIndex - 1);
		QSort(v, pivotIndex + 1, end);
	}
}

void QuickSort(std::vector<int>& v)
{
	QSort(v, 0, v.size() - 1);
}


int main()
{
	std::vector<int> v = { 9,8,7,6,5,4,3,2,1,0};
	QuickSort(v);
	return 0;
}