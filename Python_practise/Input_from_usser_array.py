# -*- coding: utf-8 -*-
"""
Created on Tue Apr  6 14:40:49 2021

@author: anike
"""

#Copy paste from here
def userinputarray():
    input_string = input("enter elemnets seperated by spaces : ")
    print(input_string)                          #taking input

    user_list = input_string.split()             #Convert to list
    print("string format",user_list)            #optional
    
    for i in range(len(user_list)):              #convert to integer
        user_list[i] = int(user_list[i])
        
    print("Integer format",user_list)
    return user_list
