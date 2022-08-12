# -*- coding: utf-8 -*-
"""
Created on Fri Apr  2 15:02:59 2021
Largest element in an array
@author: anike

def swap(a,b):
    temp = a
    a = b
    b = temp  
    print("After swaping " , a)
    print("After swaping " , b)
swap(a,b)

arr = [2,3,8,1,9]
print(len(arr))

print(arr)
for i in range(len(arr)-1):
    if arr[i] >arr[i+1]:
        swap(arr[i] , arr[i+1])
    else:
        continue
    print(arr)
"""
def largest(arr,n):
    #intializing largest element
    max = arr[0]
    #traverse array element from second
    #Compare with current max
    for i in range(1,n):
        if arr[i] > max:
            max = arr[i]
    return max

arr = [20,30,70,650,82]
n = len(arr)
ans = largest(arr, n)
print("The largest elemnt in array is : " , ans)
