# -*- coding=utf-8 -*-
# -*- https://leetcode.com/problems/intersection-of-two-linked-lists/ -*-
# -*- jasonlz -*-



# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    # @param two ListNodes
    # @return the intersected ListNode
    def get_len(self,head):
        i=0
        while head!=None:
            i=i+1
            head=head.next
        return i
    def getIntersectionNode(self, headA, headB):
        lenA=self.get_len(headA)
        lenB=self.get_len(headB)
        if lenA>=lenB:
            a=lenA-lenB
            lenth=lenB
            for i in range(a):
                headA=headA.next
        if lenA<lenB:
            a=lenB-lenA
            lenth=lenA
            for i in range(a):
                headB=headB.next
            
        for i in range(lenth):
                if headA==headB:
                    return headA
                else:
                    headA=headA.next
                    headB=headB.next
        return None
