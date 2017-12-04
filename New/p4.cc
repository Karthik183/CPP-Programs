#include <iostream>

using namespace std;

struct student {
int rollno;
char sex;
};


int main ()
{
student anil;
student *anilptr;
anilptr=&anil;

anil.rollno=1234;
anilptr->sex = 'm';
cout <<anil.sex <<endl;
cout << anilptr->rollno <<endl;
}

