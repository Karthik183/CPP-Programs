#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	cout<<"GfG!";
	string a;
	string b;
	cin>> a;
	cin>>b;
	int i;
   char arr[10];
	for(i=0;i<a.length();i++){
	    arr[i]=a[i];
	}
	
	sort(arr,arr+10);
	for(i=0;i<a.length();i++){
	    cout<< arr[i];
	}
	for(i=0;i<a.length();i++){
	    a[i]=arr[i];
	}
	char brr[10];
	for(i=0;i<b.length();i++){
	    brr[i]=b[i];
	}
	
	sort(brr,brr+10);
	for(i=0;i<b.length();i++){
	    cout<< brr[i];
	}
	for(i=0;i<a.length();i++){
	    b[i]=brr[i];
	}
	
	cout<<a<<endl;
	cout<<b<<endl;
	if(a.(compare(b)! =0){
	    cout<<"ANAGRAM"<<endl;
	}

	return 0;
}
