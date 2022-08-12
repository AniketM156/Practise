# -*- coding: utf-8 -*-
"""
Created on Fri Mar 26 15:34:09 2021

@author: anike
"""
def prime():
    a = int(input("enter start value : "))
    b = int(input("enter end value : "))
    for i in range(a,b+1):
        if i > 1:
            for j in range(2,i):
                if (i % j == 0):
                    break
            else:
                print(i)
    
prime()