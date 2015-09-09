# -*- coding=utf-8 -*-
# -*- https://leetcode.com/problems/gas-station/ -*-
# -*- jasonlz -*-

class Solution:
    # @param gas, a list of integers
    # @param cost, a list of integers
    # @return an integer
    def canCompleteCircuit(self, gas, cost):
         num=len(gas)
         gas_ini=[]
         for i in range(num):
             gas_ini.append(gas[i]-cost[i])
         gas_now=0
         begin=0
         end=0
         n=0
         for i in range(num-1):
             gas_now=gas_now+gas_ini[n]
             if gas_now>=0:
                 end=end+1
                 n=end
             else:
                 begin=begin-1
                 if begin<0:
                     begin=num-1
                 n=begin
         gas_now=gas_now+gas_ini[n]
         if gas_now>=0:
             return begin
         else:
             return -1
