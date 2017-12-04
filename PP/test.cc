#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<iostream>
using namespace std;

bool compare(int a,int b)
{

if(a<b)
return true;
else
return false;



}
int main()
{

int arr[10]={1,2,3,10,9,6,4,33,91,1};

sort(arr+5,arr+9,compare);
int i;
for(i=0;i<10;i++)
cout<<arr[i]<<" ";

//cout <<arr.begin();

return 0;


}
