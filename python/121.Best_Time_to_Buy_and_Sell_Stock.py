# -*- coding=utf-8 -*-
# -*- https://leetcode.com/problems/best-time-to-buy-and-sell-stock/ -*-
# -*- jasonlz -*-


class Solution:
    # @param prices, a list of integer
    # @return an integer
    def maxProfit(self, prices):
        size=len(prices)
        if size==0:
            return 0
        i=size-1
        max_re=0
        max_num=prices[i]
        i=i-1
        while i>=0:
            if max_num<prices[i]:
                max_num=prices[i]
            if max_re<(max_num- prices[i]):
                max_re=max_num- prices[i]
            i=i-1
        return max_re
