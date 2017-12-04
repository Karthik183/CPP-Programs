#include <stdio.h>
#include <iostream>
using namespace std;

class my_class
	{
		private:
			int a,b,c;

		public:
			int d;
			void assign_a(int z)
			{
				this->a = z;
			}
			void print_a()
			{
				cout<<"a = "<<a<<endl;
			}
			bool operator <(my_class c1)
			{
				if(this->a<c1.a)
					return true;
				else
					return false;
			}
			bool operator <(int c1)
			{
				if(this->a<c1)
					return true;
				else
					return false;
			}

	};


int main()
{
	my_class q1,q2;
	q1.d =10;
	q1.assign_a(12);
	q2.assign_a(100);
	if(q1<q2)
		cout<<"q1 is less than q2"<<endl;
	else if(q2<q1)
		cout<<"q2 is less than q1"<<endl;
	else
		cout<<"q1 is equal to q2"<<endl;
	//cout<<qwerty.d<<endl;
	int a=100;
	if(q1<a)
		cout<<"q1 is less than a"<<endl;
	else
		cout<<"q1 is not less than a"<<endl;
	return 0;
}
