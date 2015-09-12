# -*- coding=utf-8 -*-
# -*- https://leetcode.com/problems/valid-number/ -*-
# -*- jasonlz -*-

class Solution:
    def isNumber(self, s):
        try:
            float(s)
            return True
        except ValueError:
            return False