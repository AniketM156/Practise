# -*- coding: utf-8 -*-
"""
Created on Sat Apr 10 20:35:03 2021

@author: anike
"""
lst = ["ant","bird","cat","duck","elephant"]
print("Original list" , lst)
print()

for index , i in enumerate(lst):
    place = index
    print("indexs-{} list_element-{}".format(index,i).title())
    print()