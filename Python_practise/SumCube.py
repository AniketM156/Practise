# -*- coding: utf-8 -*-
"""
Created on Fri Apr  2 14:46:01 2021

@author: anike
"""

n = int(input("enter a number : "))
sum = 0
i = 0
for i in range(0,n+1):
    sum = sum + (i*i*i)
    
print("The sum is" , sum)