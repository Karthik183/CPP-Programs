counter=100
a=23.3
print counter
print a
x=input("enter the value of x:")
print x
'''
#del a,x
print a
print x

str = "hello world"
print str
print str[2:5]
print str[:6]
print str +" " + "test"

list = ['abcd', 193, 'karthik', 'virat', 456]
print list
print list[0]
list2 = ['vamshi', 789, 'ramesh']
print list2
print list2*3
print list+list2
list[2]=183
print list


'''
'''
#tuples
tuple = ( 'abcd', 786 , 2.23, 'john', 70.2  )
tinytuple = (123, 'john')
print tuple
print tuple[3]
print tuple*2
print tuple + tinytuple

dict = {}
dict['one'] = "This is one"
dict[2]     = "This is two"

tinydict = {'name': 'john','code':6734, 'dept': 'sales'}
print dict
print tinydict
student = {'name':'karthik','roll':'14cs01022', 'branch':'cse'}
print student
print student.keys()
print student.values()
list(tuple)
print tuple
x=input("enter the value of x:")
y=input("enter the value of y:")
z=complex(x,y)
print z
'''

import math
x=input("enter the valiue of x")
print math.sqrt(x)
print math.exp(x)
import time;

import calendar

localtime = time.localtime(time.time())
print "Local current time :", localtime
localtime = time.asctime(time.localtime(time.time()))
print localtime
year=input("enter the year")
k= calendar.isleap(year)
print k
if k is True:
  print "leap year"
else:
  print "not leap year"  

































