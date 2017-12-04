#include <iostream>
#include <algorithm>
using namespace std;
int main(){
int i,j;
int a[6]={10,2,0,5,0,8};int n=6;
for(i=0;i<n;i++){
	if(a[i]!=0){
 		for(j=i+1;i<n;i++){
 			if(a[j]=0){
 			
 			swap(a[i],a[j]);
 			}
 	
 }
 }
 }
 
 for(int i=0;i<n;i++){
 	cout<<a[i]<<" ";
 	}
 return 0;	
 	}
 		

