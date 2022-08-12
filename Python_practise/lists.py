# -*- coding: utf-8 -*-
"""
Created on Sat May  1 22:00:01 2021

@author: anike
"""

lst = [1,2,3,4,5,6]
print(lst[1])
lst[1]=10
print(lst[1])

print("---------------------------->")
print("next \n")
for i in range(len(lst)):
    print(i)
    
if 7 in lst:
    print("the number is present")
else:
    print("not present")

print("---------------------------->")    
lst.append(16)
print("append :",lst[6])

print("---------------------------->")
lst.insert(4,12)
print("insert :")
for i in lst:
    print(i)

print("---------------------------->")    
print("remove")
lst.remove(16)
for i in lst:
    print(i)

print("---------------------------->")
print("pop")
lst.pop()
for i in lst:
    print(i)

print("---------------------------->")
lst.clear()
for i in lst:
    print(i)

print("---------------------------->")
ca = list("a" "b" "c")
print(ca)