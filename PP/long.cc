#include<iostream>
using namespace std;
int main() {
string str;
cin>>str;
 int i; int max=0; 
 int length; 
 int arr[150]; 
 for(i=0;i<150;i++){
  arr[i]=0;
   } 
  int start=0;
   for(i=0;i<str.length();i++){
	   arr[str[i]]++;
	   
	   if(arr[str[i]]>1){ 
	   length=i-start; 
	   while(arr[str[i]]!=1){
		   arr[str[start]]--;
		   start++;
		 
	   }
	   
		
	   if(length>max) 
	   max=length; 
	   }
	}
	length=i-start;
	if(length>max) 
	   max=length; 
	   
   cout<<max<<endl;
   return 0;
   
   }
