# -*- coding: utf-8 -*-
"""
Created on Sat Apr 10 01:01 pm 2021

@author: anike
"""

class A:
    def __init__(self):
        print("its A init")
    
    def feater1(self):
        print("feater one ")
        
    def feater2(self):
        print("feater two ")

class B():
    def __init__(self):
        print("its B init")
        super().__init__()
    def feater3(self):
        print("feater three ")
        
    def feater4(self):
        print("feater four ")
        
class C(A,B):
    def __init__(self):
        print("this is constructer of C")
        super().__init__()
    
    def feater5(self):
        print("feater three ")

        
    
a1 = A()
print()
b1 = B()
print()
c1 = C()
    