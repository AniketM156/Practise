# -*- coding: utf-8 -*-
"""
Created on Sat Apr 10 12:46:51 2021

@author: anike
"""

class A:
    def feater1(self):
        print("feater one ")
        
    def feater2(self):
        print("feater two ")

class B():
    def feater3(self):
        print("feater three ")
        
    def feater4(self):
        print("feater four ")
        
class C(A,B):
    def feater5(self):
        print("feater three ")
        
    #def feater4(self):
    #    print("feater four ")
        
a1 = A()
a1.feater1()
a1.feater2()

print()
b1 = B()
b1.feater3()
b1.feater4()

print()
c1 = C()

c1.feater1()
c1.feater2()
c1.feater3()
c1.feater4()
c1.feater5()