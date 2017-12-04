#include <bits/stdc++.h>
using namespace std;
int main(){
    int i;
    i=8;
  string s = to_string(i);
 int n= s.length();
 cout<<n<<endl;
  for(int i=0;i<n;i++){
      if(s[i]!=s[n-i-1]){
          cout<<"not poilndrome"<<endl;
          return 0;
      }
  }
  
  cout<<"palindrome";
  return 0;
  
}
