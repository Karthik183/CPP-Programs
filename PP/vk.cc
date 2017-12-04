#include <iostream>
using namespace std;
int main() {
int a,b,c;
cin >> a >> b >> c;
int d;
d=max(max(a,b),c);
int e;
e=min(min(a,b),c);
cout<<d<<endl;
cout<<e<<endl;
return 0;
}

