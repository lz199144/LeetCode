# -*- coding=utf-8 -*-
# -*- https://leetcode.com/problems/set-matrix-zeroes/ -*-
# -*- jasonlz -*-

class Solution(object):
    def setZeroes(self,matrix):
        r=[]
        c=[]
        row=len(matrix)
        column=len(matrix[0])
        for i in range(row):
            for j in range(column):
                if matrix[i][j]==0:
                    r.append(i)
                    c.append(j)
        for i in range(len(r)):
            for j in range(column):
                matrix[r[i]][j]=0
        for i in range(len(c)):
            for j in range(row):
                matrix[j][c[i]]=0

arr=[[0,0,0,5],[4,3,1,4],[0,1,1,4],[1,2,1,3],[0,0,1,1]]
s = Solution()
s.setZeroes(arr)
print(arr)

    

