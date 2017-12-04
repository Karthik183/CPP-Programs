#include <iostream>
//#include <stack>

using namespace std;
int main() {
   int i;
   int n;
   cin >> n;
   int arr[n];
   for(i=0;i<n;i++){
       cin >> arr[i];
   }
    for(i=0;i<n;i++){  
      if(arr[i+1] < arr[i]){
          cout << arr[i];
          break;
       } 
}
return 0;
}



