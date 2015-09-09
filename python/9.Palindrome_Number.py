# -*- coding=utf-8 -*-
# -*- https://leetcode.com/problems/palindrome-number/ -*-
# -*- jasonlz -*-

class Solution(object):
    def isPalindrome(self,x):
        if x<0:
            return False
        if x==0:
            return True
        base=1
        while x/base>=10:
            base=base*10
        while x!=0:
            leftDigit = x / base
            rightDigit = x % 10
            if leftDigit!= rightDigit:
                     return False
            x =x- base*leftDigit
            base= base/100
            x=x/10;
        return True