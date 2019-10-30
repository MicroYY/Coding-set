#include <vector>

/*
void Heapify(std::vector<int>& v, int root, int length)
{
	int left = 2 * root + 1;
	int right = 2 * root + 2;

	int maxIndex = root;
	if (left < length && v[left] > v[maxIndex]) {
		maxIndex = left;
	}
	if (right<length && v[right]>v[maxIndex]) {
		maxIndex = right;
	}

	if (maxIndex != root) {
		std::swap(v[maxIndex], v[root]);
		Heapify(v, maxIndex, length);
	}
}

void HeapSort(std::vector<int>& v)
{
	for (int i = v.size() / 2 - 1; i >= 0; i--) {
		// i 为有子节点的节点
		Heapify(v, i, v.size());
	}

	for (int i = v.size() - 1; i >= 1; i--) {
		std::swap(v[0], v[i]);
		Heapify(v, 0, i);
	}
}


int main()
{
	std::vector<int> v = { 11,4,2,41250,9,810,6,7436,5,93 };
	HeapSort(v);

	return 0;
}

*/


void Heapify(std::vector<int>& v, int root, int length) {
	int left = 2 * root + 1;
	int right = 2 * root + 2;

	int maxIndex = root;

	if (left < length && v[left] > v[maxIndex]) {
		maxIndex = left;
	}
	if (right < length && v[right] > v[maxIndex]) {
		maxIndex = right;
	}

	if (maxIndex != root) {
		std::swap(v[maxIndex], v[root]);
		Heapify(v, maxIndex, length);
	}
}

void HeapSort(std::vector<int>& v) {
	for (int i = v.size() / 2 - 1; i >= 0; i--) {
		Heapify(v, i, v.size());
	}

	for (int i = v.size() - 1; i >= 1; i--) {
		std::swap(v[0], v[i]);
		Heapify(v, 0, i);
	}
}


int main() {

	std::vector<int> v = { 1,44,6,0,2,3,19,8,7,65 };
	HeapSort(v);
	return 0;
}