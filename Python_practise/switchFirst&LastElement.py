# -*- coding: utf-8 -*-
"""
Created on Tue Apr  6 14:56:41 2021

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

def swap(arr):
    size = len(arr)
    
    temp = arr[0]
    arr[0] = arr[size-1]
    arr[size-1]=temp
    
arr = userinputarray()

print("befor : ",arr)
swap(arr)
print("after",arr)
