# -*- coding: utf-8 -*-
"""
Created on Mon May  3 11:41:57 2021

@author: anike
"""
'''
class Employee:
    def __init__(self):
        self.id = int(input("enter your id number : "))
        self.department = input("enter your department : ") 
        self.performance_index =  int(input("enter your performance index : "))
        
    class Date_of_joining:
        def date_of_join(self):
            self.date = int(input("enter your DOB"))
            print(date)
            
class Promotion(Employee()):
    def promo(self):
        
        self.new_index = super().performance_index + 20
        print("your promotion is : ", new_index)
        
    
Jatin = Employee()
Jatin.promo()
Jatin.date_of_join()
'''

class employee():
  def _init_(self, id, department, performanceindex,dd,mm,yy):
    self.id = id
    self.department = department
    self.performanceindex = performanceindex
    self.join_date = self.DateofJoining(dd,mm,yy) 
  
  class DateofJoining():
    def _init_(self, dd, mm, yy):
      self.dd = dd
      self.mm = mm
      self.yy = yy
    def display_date(self):
      print('Date of Joining: {}-{}-{}'.format(self.dd,self.mm,self.yy))

class Promotion():
  def _init_(self):
    pass
  def promotion(self, employee):
    employee.performanceindex = employee.performanceindex + 20

Jatin = employee(264, 'A', 70, 4,7,2010)
date_of_joining = Jatin.join_date

promotion = Promotion()
promotion.promotion(Jatin)

print('Performance Index after Promotion: {}'.format(Jatin.performanceindex))

date_of_joining.display_date()


            

        