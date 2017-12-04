#include <iostream>
using namespace std;
void display(const int *start,const int *end);

int main()
{
int numbers[]= {22,55,87,98};
display(numbers,numbers+4);

return 0;

}


void display(const int *start,const int *end)
{
const int *ptr;
for (ptr = start;ptr !=end; ptr++)
{
	cout << *ptr <<endl;
}

}





