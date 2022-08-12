# -*- coding: utf-8 -*-
"""
Created on Mon May  3 12:31:26 2021

@author: anike
"""

lst =[1,2,3,4,5,6,7,8,9,10]
lstl = list(filter(lambda x : x % 5 == 1 ,lst))
print(lstl)