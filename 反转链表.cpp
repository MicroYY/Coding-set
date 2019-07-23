//输入一个链表，反转链表后，输出新链表的表头。

#include <stdio.h>

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
		val(x), next(NULL) {
	}
};

ListNode* ReverseList(ListNode* pHead) {
	if (!pHead) {
		return NULL;
	}
	ListNode* first = pHead;
	ListNode* second = first->next;
	first->next = NULL;
	while (second) {
		ListNode* third = second->next;
		second->next = first;
		first = second;
		second = third;
	}
	return first;
}

int main()
{
	
	ListNode* p1 = new ListNode(1);
	ListNode* p2 = new ListNode(2);
	ListNode* p3 = new ListNode(3);
	ListNode* p4 = new ListNode(4);
	ListNode* p5 = new ListNode(5);
	ListNode p(0);
	p1->next = p2;
	p2->next = p3;
	p3->next = p4;
	p4->next = p5;
	auto res = ReverseList(p1);
}