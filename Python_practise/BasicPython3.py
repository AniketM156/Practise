# -*- coding: utf-8 -*-
"""
Created on Fri Mar 26 12:59:38 2021

@author: anike
"""

n = int(input("Enter the number for the factorial you want : "))
if n <= 0:
    print("The factorial is " , 0)
elif n == 1 or n == 0:
    print("The factorial is " , 1)
else :
    fact = 1
    while(n>1):
        fact = fact * n
        n=n-1
    print("The factorial is " , fact)