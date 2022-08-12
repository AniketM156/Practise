# -*- coding: utf-8 -*-
"""
Created on Tue Apr  6 15:10:27 2021

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
    print("Integer format",user_list)
    return user_list

def swap(list):
    post1=int(input("enter postiton 1 : "))
    post2=int(input("enter postiton 2 : "))
   
    if post1 < 0 and post1 > len(list) - 1:
        print("wrong postion")
    
    if post2 < 0 and post2 > len(list) - 1:
        print("wrong postion")
    
    list[post1 -1],list[post2-1] = list[post2-1],list[post1-1]
    return list

list = userinputarray()
swap(list)
print("swaped list is : " , list)