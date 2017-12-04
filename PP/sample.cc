
#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void display(int arr[],int n)
{
	int i;
		for(i=0;i<n;i++)
	{
		cout<< arr[i] <<" " ;
	}
	
}
int freq(int arr[], int n, int f)
{
	int temp,i;
	for(i=0;i<n;i++)
	{
		temp =i;
		if(count(arr,arr+n,arr[i])==f)
		break;
	}
	
	return arr[temp];
}
int main()
{
	int n,i,x,f;
	cout<< "Enter the no.of elements\n";
	cin>> n;
	int arr[n];
	cout<< "Enter the elements into the array\n";
	for(i=0;i<n;i++)
	{
		cin>> arr[i];
	}
	cout<<"Enter the frequency";
	cin>>f;
	cout<<f<<endl;cout<<"\nGiven array is ";
	display(arr, n);
	sort(arr,arr+n);cout<<"\n";cout<<"\nSorted array is ";
	display(arr, n);
	x=freq(arr,n,f);
	cout<<"\nThe element with the frequency "<<f << " is ";
	cout<<x;
	return 0;
}
