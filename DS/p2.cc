#include <stdio.h>
#include <iostream>
using namespace std;


int a = 10;

void f1(int a)
{
	cout<<"called wih int as param"<<endl;
	cout<<a<<endl;
}


int f1(float b)
{
	cout<<"called wih float as param"<<endl;
	return 0;
}

void print_global_a()
{
	cout<<"global a = "<<a<<endl;
}

int main()
{
	int a,b;
	a =2;
	cout<<"main a = "<<a<<endl;
	print_global_a();
	for(int i =0;i<1;i++)
	{
		int a=152;
		cout<<a<<endl;
		cout<<::a<<endl;
	}
	
	
	f1(8);
	f1(float(2.1));
	return 0;
}
