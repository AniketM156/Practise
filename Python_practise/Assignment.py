# -*- coding: utf-8 -*-
"""
Created on Sat Apr 10 20:01:46 2021

@author: anike
"""
"""Question 1"""
from Input_from_usser_array import *


a = userinputarray()
print("this is value of " , a)

for index,i in enumerate(a):
    print(i , index)
    if index % 2 != 0:
        a[index]=a[index-1]
    else:
        continue
    
print(a)

"""question 2 """

str = input("enter a string")
for i in range(len(str)):
    print(str(i))

