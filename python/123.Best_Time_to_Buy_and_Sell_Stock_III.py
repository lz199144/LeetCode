# -*- coding=utf-8 -*-
# -*- https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/-*-
# -*- jasonlz -*-

def maxProfit(prices):
    size=len(prices)
    if size==0:
        return 0
    i=size-1
    max_re=0
    max_re2=0
    max_num=prices[i]
    max_x=i
    i=i-1
    max_id=-1
    min_id=-1
    while i>=0:
        if max_num<prices[i]:
            max_num=prices[i]
            max_x=i
        if max_re<(max_num- prices[i]):
            max_re=max_num- prices[i]
            min_id=i
            max_id=max_x
        i=i-1
    if max_id>=0 and min_id>=0:
        del(prices[max_id])
        del(prices[min_id])
        if size-3>0:
            i=size-3
            max_num2=prices[i]
            i=i-1
            while i>=0:
                if max_num2<prices[i]:
                    max_num2=prices[i]
                if max_re2<(max_num2- prices[i]):
                    max_re2=max_num2- prices[i]
                i=i-1
    return max_id,min_id
arr=[6,1,3,2,4,7]
print(maxProfit(arr))

