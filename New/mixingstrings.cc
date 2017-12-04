#include <iostream>
#include <cmath>
using namespace std;

int main() {
//	cout<<"GfG!";
string s ="axz";
string k ="pq";
int a =s.length();
cout<<a<<endl;
int b=k.length();
int n=s.length()+k.length();
string sk(n,'a');
cout<<sk<<endl;
 int p=min(s.length(),k.length());
    cout<<p<<endl;
    cout<<2*p<<endl;
for(int i=0;i<n;i++){
    if(i%2==0 && i<2*p ){
        sk[i]=s[ceil(i/2)];
    }
    else {
        sk[i]=k[ceil(i/2)];
    }
    
                 }
   if(a>b){
        for(int i=2*b;i<=a+b;i++){
            sk[i]=s[i-b];
        }
    }
       if(b>a){
           for(int i=2*a;i<=b+a;i++){
               sk[i]=k[i-a];
           }
       } 
        
    
//cout<<sk[8]<<endl;
cout<<sk<<endl;

	return 0;
}
