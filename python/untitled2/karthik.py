'''
a=int(input("enter the number:"))
print (a)
if a>= 20 :
   print ("kk")
else:
    if a<= 15 :
        print ("True")
    else:
        print ("False")

year=int(input("enter the number:"))
if year%4==0:
    print  ("Year is Leap")
else:
    print ("Year is not Leap")
'''

'''
n=int(input("enter the number:"))
sum=0
print ("sum of",n,"numbers")
for i in range(1,n+1):
    sum = sum+i
print ("the sum is",sum)

for i  in range(1,6):
    for j in range(1,i+1):
        print(i)

while n>10:
    n=n-1
    print(n)

for i in [1,2,3,4,5]:
    if i==3:
        pass
        print ("Pass when value is",i)
        print('hii',  'hiii')

    print(i),

name="Rajat"
length=len(name)
i=0
for n in range(-1,(-length-1),-1):
    print (name[i],"\t",name[n])
    i+=1
'''
'''
print ("karthik")

def sum(a,b):
    c=a+b
    print("the sum of given numbers is ",c)
    return c

e= int(input("enter the value of e"))
f= int(input("enter the value of f:"))

d = sum(e,f)
print (d)
'''
'''
def sum(a,b):
    "Adding the two values"
    print("Printing within Function")
    print (a+b)
    return a + b
e=sum(1,2)
print (e)

'''
'''
def msg():
    print("Hello")
    return
msg()
'''
'''
sum=0
n= int((input("enter the number:")))
for i in range(1,n+1):
    sum=sum+i

print (sum)
'''
import os
obj4=open("karthik4.csv","w")
obj4.write("welcome to the world of python this anknb fk")
obj4.write("hello ")
obj4.close()

import csv
 with open('eggs.csv', 'rb') as csvfile:
    spamreader = csv.reader(csvfile, delimiter=' dgbh', quotechar='|')
    for row in spamreader:
     print ("hello python")
     