# -*- coding: utf-8 -*-
"""
Created on Sat Apr 10 11:55:08 2021

@author: anike
"""

print("Python is object oriented progaming language")
class cla1 :
    def __init__(self,ram):
        print("this is the constructer")
        self.ram = ram
        
    def config(self):
        print("ram " , self.ram)


comp1 = cla1(16)
comp2 =cla1(8)
        
cla1.config(comp1)
cla1.config(comp2)
comp1.config()
comp2.config()



        