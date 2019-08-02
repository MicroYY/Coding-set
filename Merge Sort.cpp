

#include <vector>

void Merge(std::vector<int>& v, std::vector<int>& tmp, int leftPos, int rightPos, int rightEnd)
{
	int i, leftEnd, n, tmpPos;
	leftEnd = rightPos - 1;
	tmpPos = leftPos;
	n = rightEnd - leftPos + 1;

	while (leftPos <= leftEnd && rightPos <= rightEnd)
	{
		if (v[leftPos] <= v[rightPos])
		{
			tmp[tmpPos++] = v[leftPos++];
		}
		else
		{
			tmp[tmpPos++] = v[rightPos++];
		}
	}

	while (leftPos <= leftEnd)
	{
		tmp[tmpPos++] = v[leftPos++];
	}
	while (rightPos <= rightEnd)
	{
		tmp[tmpPos++] = v[rightPos++];
	}

	//for (int i = 0; i < n; i++,rightEnd--)
	//{
	//	  v[rightEnd] = tmp[rightEnd];
	//}
	for (int i = rightEnd; i > rightEnd - n; i--)
	{
		v[i] = tmp[i];
	}
}

void MSort(std::vector<int>& v, std::vector<int>& tmp, int left, int right)
{
	int center;
	if (left < right)
	{
		center = (left + right) / 2;
		MSort(v, tmp, left, center);
		MSort(v, tmp, center + 1, right);
		Merge(v, tmp, left, center + 1, right);
	}
}


void MergeSort(std::vector<int>& v)
{
	std::vector<int> tmp(v.size());
	MSort(v, tmp, 0, v.size() - 1);
}

int main()
{

	std::vector<int> v = { 1, 5,0,10,-5,9,8,2,11,-6 };
	//std::vector<int>
	MergeSort(v);
	return 0;
}