# -*- coding: utf-8 -*-
"""
Created on Sat May  1 22:30:27 2021

@author: anike
"""

dict = {"k1":"n1",
        "k2":"n2",
        "k3":"n3",
        "k4":"n4"
        }
print(dict)

print("key value" , dict["k1"])

print(dict.keys())

for i in dict:
    print(i)
    
    
for i in dict:
    print("values of {} is".format(i) , dict[i])
    
for i , j in dict.items():
     print(i,j)
     
if "k2" in dict:
    print("exists n is :" , dict["k2"])
else:
    print("does not exist")
    
print(len(dict))

dict["k5"]="n5"
print(dict)

del dict["k2"]
print(dict)

dict.clear()
print(dict)

dict2 = dict(a=1,b=2,c=3)
print(dict2)
