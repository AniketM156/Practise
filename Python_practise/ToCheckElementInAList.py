# -*- coding: utf-8 -*-
"""
Created on Tue Apr  6 15:24:47 2021

@author: anike
"""

list = [10,20,30,40,50,60]
chek = int(input("enter the number you want to check"))

for i in range(0 , len(list)-1):
    if list[i] == chek:
        print(chek , " is present ")
        break
else:
    print(chek , " is not present")
    