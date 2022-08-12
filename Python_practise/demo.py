# -*- coding: utf-8 -*-
"""
Created on Sat Apr 10 11:44:59 2021

@author: anike
"""
def main():    
    print("this is imported : " , __name__)

if __name__ == "main":
    main()
else:
    print("The main func is not runing")