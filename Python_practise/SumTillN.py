# -*- coding: utf-8 -*-
"""
Created on Fri Apr  9 12:39:37 2021

@author: anike
"""

def add(x,*y):
    sum = 0
    for i in y:
        sum+=i
    print("the ans is : ".upper() , sum + x)
    print(type(x),type(y))
add(1,0,1,0,0,1,0,0,0,1)


