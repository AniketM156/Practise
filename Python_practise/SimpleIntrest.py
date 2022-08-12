# -*- coding: utf-8 -*-
"""
Created on Fri Mar 26 13:09:51 2021

@author: anike
"""

#Simple intrest
def simpleint():
    p = int(input("Enter the Principle amount"))
    t = int(input("Enter the time"))
    r = int(input("Enter the intrest rate"))
    
    s = (p*r*t)/100
    
    print("Your simple intrest is : " , s)
    return s 
    
simpleint()