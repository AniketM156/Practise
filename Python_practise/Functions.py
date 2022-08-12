# -*- coding: utf-8 -*-
"""
Created on Sun May  2 20:22:31 2021

@author: anike
"""

def add(x,y):
    return x+y

print(add(5,10))

def name(ename):
    print("the name is :" , ename)
    
name("hello")

#def price(qunat = 1,pric):
#    print("the price is :" , quant , pric)

#price(2,40)
#price( 3)

def area(r):
    return r**2

print(area(4))

def fact(n):
    if n == 1:
        f = 1
    else:
        f = n * fact(n-1)
    return f

print("the factorial is :" , fact(6))
    