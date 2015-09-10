# -*- coding=utf-8 -*-
# -*- https://leetcode.com/problems/remove-element/ -*-
# -*- jasonlz -*-

class Solution(object):
    def threeSumClosest(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        dis = float("Inf")
        nums.sort()
        n = len(nums)
        for i in range(n-1):
        	low = i+1
        	high = n-1
        	while(low<high):
        		sum = nums[low]+nums[high]+nums[i]
        		if(sum == target):
        			return target
        		else:
        			if(abs(sum-target)<dis):
        				dis = abs(sum-target)
        				result = sum
        			if(sum-target>0):
        				while(high>0 and nums[high]==nums[high-1]):
        					high = high-1
        				high = high-1
        			else:
        				while(low<n-1 and nums[low]==nums[low+1]):
        					low = low+1
        				low = low+1
        return result