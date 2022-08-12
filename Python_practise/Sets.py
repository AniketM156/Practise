# -*- coding: utf-8 -*-
"""
Created on Sat May  1 22:22:36 2021

@author: anike
"""

st = {"a","f",2,3}
print(st)

for i in st:
    print(i)

if "f" in st:
    print("the given thing exist")
else:
    print("abscent")
    
st.add("apple")
print(st)

st.remove("f")
print(st)

st.update(["this","is","new"])
print(st)

st.discard("is")
print(st)

st.pop()
print(st)

st.clear()
print(st)

#del st
#print(st)

st2 = set(("a",3,4))
print(st2)