'''
def sum(a, b):
    "Adding the two values"
    c = a+b
    print ("adding the given two numbers")
    print (a+b)
    return c

def msg():
    print ("message")

e=int(input("enter the number e:"))
f=int(input("enter the number f:"))
total=sum(e,f)
print (total)
msg()


def msg(Id=109, Name='vamshi', Age=21):
    "Printing the passed value"
    print (Id)
    print (Name)
    print (Age)
    return
# Function call
msg(Id=100, Name='Ravi', Age=20)
msg(Id=101, Name='Ratan')
msg()
'''
'''
def msg(id,name):
    print (id)
    print (name)
    return
msg(101,'karthik')
msg(id=23,name='vk')
msg('karthik',234)

square = lambda x1:\
      x1 * x1*7

# Calling square as a function
print ("Square of number is", square(10))

b=int(input("enter the number you want to add"))
print (b)
'''

import karthik
import math
obj=open("abcd1.txt","w")
obj.write("welcome to the world of python this anknb fk")
obj.write("hello ")
obj.close()
import os
# os.rename('pqr.txt','abcd.txt')
obj1=open("abcd1.csv","r")
s=obj1.read()
print (s)
obj1.close()
obj2=open("abcd1.txt","r")
s1=obj2.read(222)
print (s1)
# os.mkdir("new1")
karthik.msg()
n=int(input("enter the value:"))
print (math.tan(n))
print (math.sin(n))
import time;
localtime = time.localtime(time.time())
print ("Current Time is :", localtime)

import calendar
print (calendar.prcal(2017))

# Three sides of the triangle is a, b and c:
a = float(input('Enter first side: '))
b = float(input('Enter second side: '))
c = float(input('Enter third side: '))

# calculate the semi-perimeter
s = (a + b + c) / 2

# calculate the area
area = (s * (s - a) * (s - b) * (s - c)) ** 0.5
print (area)
print('The area of the triangle is ', area)
my_str = str(input("enter the string:"))
print (my_str)

words= my_str.split()
#words.sort()
#for word in words:
print(words)
print ("this is python")

