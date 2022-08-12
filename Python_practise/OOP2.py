# -*- coding: utf-8 -*-
"""
Created on Sat Apr 10 12:37:36 2021

@author: anike
"""

class student:
    def __init__(self,name,rollno):
        self.name = name
        self.rollno = rollno
        self.laptop = laptop
    def show(self):
        print(self.name , self.rollno)
    
    class laptop:
        def __init__(self):
            self.brand = dell
            self.ram = 4
            self.cpu = 8
            
            
s1 = student("aniket" , 40)
s2 = student("jhon" , 20)

print(s1.name , s1.rollno)
print(s2.name , s2.rollno)
print()
s1.show()
s2.show()

lap1 = student.laptop()