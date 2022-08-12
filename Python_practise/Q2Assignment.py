# -*- coding: utf-8 -*-
"""
Created on Sun Apr 11 20:12:12 2021

@author: anike
"""
"""question 2 """
temp=[]
str = input("enter a string : ")
for i in range(len(str)):
    if str[i].lower() == "a"or str[i].lower() == "e"or str[i].lower() == "i"or str[i].lower() == "o"or str[i].lower() == "u":
        x = str[i]
    else:
        print("none")
print(x)

""" Question 3"""
n = []
for i in range(5):
    n[i][0] == input("enter your name")
    n[i][1] == int(input("enter your no.))