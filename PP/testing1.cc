#include <iostream>
//#include <stack>

using namespace std;
int main() {
int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        a[i]=0;
    }
     for(int i=0;i<n;i++){
        int temp;
        cin>> temp;
        a[temp]++;
        
    }
     for(int i=0;i<n;i++){
     if(a[i]>1)
        cout<<i<< endl;
    }
    
    return 0;
    
}


