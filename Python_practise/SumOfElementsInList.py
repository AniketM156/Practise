# -*- coding: utf-8 -*-
"""
Created on Tue Apr  6 15:36:48 2021

@author: anike
"""

def userinputarray():
    #taking input
    input_string = input("enter elemnets seperated by spaces : ")
    print(input_string)

    #Convert to list 
    user_list = input_string.split()
    print("string format",user_list)
    
    #convert to integer
    for i in range(len(user_list)):
        user_list[i] = int(user_list[i])
    return user_list
    print("Integer format",user_list)

list = userinputarray()
sum = 0
for i in range(len(list)):
    sum = sum + list[i]
    
print("the sum is : " , sum)