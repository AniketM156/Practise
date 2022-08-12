# -*- coding: utf-8 -*-
"""
Created on Sat May  1 22:14:32 2021

@author: anike
"""

t = ("a",2,3)
print(type(t))
#
print(t[2])
#
for i in t:
    print(i)
#
if 2 in t:
    print("given number is in tuple")
    
print(len(t))

del t
#print(t)

a = tuple("a","b",6 ,78)
print(a)    
