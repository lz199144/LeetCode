# -*- coding=utf-8 -*-
# -*- https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/ -*-
# -*- jasonlz -*-

class Solution(object):
    def maxProfit(self,prices):
        max_pro=0
        for i in range(len(prices)-1):
            if prices[i]<prices[i+1]:
                max_pro=max_pro+prices[i+1]-prices[i]
        return max_pro