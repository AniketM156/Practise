# -*- coding: utf-8 -*-
"""
Created on Mon May  3 11:20:34 2021

@author: anike
"""

def pointap(a,d,n):
    term = a
    
    for i in range(1,n+1):
        yield term
        term = term +d
        
a = 1
d = 3
n =10

total=pointap(a,d,n)
lst = list(total)
print("the AP is :" , lst)