"""
Problem Link : https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1
Platform     : GFG
Difficulty   : Easy
"""

class Solution:
    def leaders(self, arr):
        arr=arr[::-1]
        m=0
        res=[]
        n=len(arr)
        if not arr:
            return []
        for i in range(n):
            if arr[i]>=m:
                m=arr[i]
                res.append(m)
            
        return res[::-1]
            
        # code here
        
