# -*- coding: utf-8 -*-
"""
Created on Fri Mar 26 15:51:05 2021
to chek wether a number is prime or not
@author: anike
"""
def prime():
    n = float(input("enter the number you want to chek : "))
    if n > 1:
        for i in range(2 , int(n/2)+1):
            if n % i == 0:
                print(n , "Not prime")
                break
        else:
                print(n , "prime")
    else:  
        print(n , "the number is not prime")
prime()