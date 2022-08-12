# -*- coding: utf-8 -*-
"""
Created on Fri Mar 26 13:15:25 2021

@author: anike
"""
##Compund intrest
def cmpint():
    p = int(input("Enter the principal amount: "))
    r = float(input("Enter the rate of intrest: "))
    t = int(input("Enter the timespan : "))
    a = p*(1+r/100)**t
    cp=a-p
    print("The amount is : " , a)
    print("The compound intrset is : " , cp)
    return cp

cmpint()


