# -*- coding: utf-8 -*-
"""
Created on Sun Mar 28 20:35:53 2021

@author: anike
"""
i = 0
while i == 0:
    num = int(input("guess a number : "))
    if num <= 9 and num >= 0:
        print("Well guesed")
        i = 1
    else:
        print("Guess again")
        
    
        