#include <vector>

using namespace std;

bool VerifySquenceOfBST(vector<int> sequence) {
	int n = sequence.size();
	bool ret = true;
	if (n == 0)
	{
		return false;
	}
	if (n == 1)
	{
		return true;
	}
	int root = sequence[n - 1];

	int split = -1;
	vector<int> left, right;
	bool flag = true;
	for (size_t i = 0; i < n - 1; i++)
	{
		if (sequence[i] < root)
		{
			if (!flag)
			{
				return false;
			}
			left.push_back(sequence[i]);
		}
		else
		{
			flag = false;
			right.push_back(sequence[i]);
		}
	}
	if (left.size() != 0)
	{
		ret = ret && VerifySquenceOfBST(left);
	}
	if (right.size() != 0)
	{
		ret = ret && VerifySquenceOfBST(right);
	}
	return ret;
}

int main()
{
	vector<int> v = {6,1,5};
	bool res = VerifySquenceOfBST(v);
	return 0;
}