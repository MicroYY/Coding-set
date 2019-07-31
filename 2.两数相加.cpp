/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 *
 * https://leetcode-cn.com/problems/add-two-numbers/description/
 *
 * algorithms
 * Medium (32.97%)
 * Total Accepted:    91.8K
 * Total Submissions: 278.6K
 * Testcase Example:  '[2,4,3]\n[5,6,4]'
 *
 * 给出两个 非空 的链表用来表示两个非负的整数。其中，它们各自的位数是按照 逆序 的方式存储的，并且它们的每个节点只能存储 一位 数字。
 * 
 * 如果，我们将这两个数相加起来，则会返回一个新的链表来表示它们的和。
 * 
 * 您可以假设除了数字 0 之外，这两个数都不会以 0 开头。
 * 
 * 示例：
 * 
 * 输入：(2 -> 4 -> 3) + (5 -> 6 -> 4)
 * 输出：7 -> 0 -> 8
 * 原因：342 + 465 = 807
 * 
 * 
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //递归
        if(l1 == NULL && l2 == NULL) {
            return NULL;
        }
        if(l1 == NULL) {
            //l1->val = l2->val;
            return l2;
        }
        if(l2 == NULL) {
            return l1;
        }
        
        int s = l1->val + l2->val;
        ListNode* tmp = l1;
        if(s >= 10) {
            while(s >= 10) {
                tmp->val = s - 10;
                if(tmp->next != NULL) {
                    tmp = tmp->next;
                    s = ++tmp->val;
                }
                else{
                    ListNode* next = new ListNode(1);
                    tmp->next = next;
                    s = 1;
                }
            }
        }
        else{
            l1->val = s;
        }
        l1->next = addTwoNumbers(l1->next, l2->next);
        return l1;
    }
};

