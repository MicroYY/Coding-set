// ���������������У���һ�����б�ʾջ��ѹ��˳�����жϵڶ��������Ƿ����Ϊ��ջ�ĵ���˳��
// ����ѹ��ջ���������־�����ȡ���������1,2,3,4,5��ĳջ��ѹ��˳������4,5,3,2,1�Ǹ�ѹջ���ж�Ӧ��һ���������У�
// ��4,3,5,1,2�Ͳ������Ǹ�ѹջ���еĵ������С���ע�⣺���������еĳ�������ȵģ�

#include <vector>
using namespace std;

bool IsPopOrder(vector<int> pushV, vector<int> popV) {
	if (pushV.size() == 0)
	{
		return false;
	}
	vector<int> v;

	for (int i = 0, j = 0; i < pushV.size(); i++)
	{
		v.push_back(pushV[i]);
		while (j < popV.size() && v.back() == popV[j])
		{
			v.pop_back();
			j++;
		}
	}
	return v.empty();
}