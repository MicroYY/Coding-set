//输入一个链表，输出该链表中倒数第k个结点。

#include <stdio.h>

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
		val(x), next(NULL) {
	}
};

ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
	if (!pListHead || k <= 0)
	{
		return NULL;
	}
	int count = 0;
	ListNode* p = pListHead;
	while (p) {
		count++;
		p = p->next;
	}

	if (k > count) {
		return NULL;
	}
	p = pListHead;
	count = count - k;
	while (count) {
		p = p->next;
		count--;
	}
	return p;
}


int main()
{
	ListNode* p1 = new ListNode(1);
	ListNode* p2 = new ListNode(2);
	ListNode* p3 = new ListNode(3);
	ListNode* p4 = new ListNode(4);
	ListNode* p5 = new ListNode(5);
	p1->next = p2;
	p2->next = p3;
	p3->next = p4;
	p4->next = p5;
	ListNode* res = FindKthToTail(p1, 1);
	getchar();
}