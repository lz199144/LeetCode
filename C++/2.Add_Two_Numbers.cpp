/*https://leetcode.com/problems/add-two-numbers*/
/*jasonlz*/


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
	ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) 
	{
		if (l1 == NULL) return l2;
		if (l2 == NULL) return l1;

		ListNode *resList = NULL, *pNode = NULL, *pNext = NULL;
		ListNode *p = l1, *q = l2;
		int up = 0;
		while (p != NULL && q != NULL)
		{
			pNext = new ListNode(p->val + q->val + up);
			up = pNext->val / 10; 
			pNext->val = pNext->val % 10;

			if (resList == NULL)
			{
				resList = pNode = pNext;
			}
			else
			{
				pNode->next = pNext;
				pNode = pNext;
			}
			p = p->next;
			q = q->next;
		}

		while (p != NULL)
		{
			pNext = new ListNode(p->val + up);
			up = pNext->val / 10;
			pNext->val = pNext->val % 10;
			pNode->next = pNext;
			pNode = pNext;
			p = p->next;
		}

		while (q != NULL)
		{
			pNext = new ListNode(q->val + up);
			up = pNext->val / 10;
			pNext->val = pNext->val % 10;
			pNode->next = pNext;
			pNode = pNext;
			q = q->next;
		}

		if (up > 0)
		{
			pNext = new ListNode(up);
			pNode->next = pNext;
		}

		return resList;
	}
};