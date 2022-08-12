# -*- coding: utf-8 -*-
"""
Created on Mon May  3 10:54:24 2021

@author: anike
"""

'''
def sumofAP(a, n, d):
    total = (n * (2 * a + (n - 1) * d)) / 2
    yield total

a = int(input("Please Enter First Number of an A.P Series: : "))
n = int(input("Please Enter the Total Numbers in this A.P Series: : "))
d = int(input("Please Enter the Common Difference : "))

total = sumofAP(a, n, d)
lst=list(total)
print(lst)
'''
#Q1,A
arr = [1,2,3,4,5,6,7,8,9,10,11,12,13]
for i in range(len(arr)):
    if arr[i] % 4 == 0:    
        arr[i] = -1       
print(arr)