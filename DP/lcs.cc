#include<iostream>
using namespace std;
int main(){
string a,b;
int x,y;
cout<<"enter strings:";
cin >>a;
cin>> b; 
x=a.length();
y=b.length();
int T[x+1][y+1];

for(int i=0;i<a.length();i++){
	for(int j=0;j<b.length();j++){
			T[i][j]=0;
			}
			}
for(int i=1;i<a.length()+1;i++){
	for(int j=1;j<b.length()+1;j++){
		if(a[i-1]==b[j-1]){
			T[i][j]=T[i-1][j-1]+1;
			}
		else {
			T[i][j]=max(T[i-1][j],T[i][j-1]);
			}
			}
			}
 cout<<T[x][y]<<endl;
 return 1;
 }
 
