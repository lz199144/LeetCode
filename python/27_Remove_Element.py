# -*- coding=utf-8 -*-
# -*- https://leetcode.com/problems/remove-element/ -*-
# -*- jasonlz -*-

class Solution(object):
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        l = len(nums)
        if l==0:
            return
        i = 0
        while i < l:
            if nums[i]==val:
                nums[i]=nums[l-1]
                l = l-1
                continue
            i = i+1
        return l