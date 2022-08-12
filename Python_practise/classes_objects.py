# -*- coding: utf-8 -*-
"""
Created on Thu May 13 15:30:34 2021

@author: anike
"""

class Computer:
    def __init__(mysillyobject,procesor,ram):
        mysillyobject.procesor = procesor
        mysillyobject.ram = ram
    
    def speedprint(mysillyobject):
            print("The pc that you are using has an  {} procesor & has {} ram".format(mysillyobject.procesor,mysillyobject.ram))
    
lenovo = Computer("intel","4gb")
print("Before" , lenovo.ram , lenovo.procesor)
lenovo.ram = "8gb"
print("After" , lenovo.ram , lenovo.procesor)
print()
lenovo.speedprint()

del lenovo.ram 

print(lenovo.ram , lenovo.procesor)
