#include <iostream>
 
using namespace std;

int main () {
    freopen ("lepus.in", "r", stdin);
    freopen ("lepus.out", "w", stdout);

    int n, a[1000];
    char arr[1000];

    cin>>n;
   
    for(int i=1; i<=n; i++){
        cin>>arr[i];
        a[i]=-200000000;
     
    }   

    a[1]=0;
    for(int i=1; i<=n; i++) {

        if(arr[i]=='w') 
            continue;
         
        else if(arr[i]=='"') {
            a[i+1] = max(a[i+1], a[i]+1); 
            a[i+3] = max(a[i+3], a[i]+1); 
            a[i+5] = max(a[i+5], a[i]+1); 
        }
        else{  
            a[i+1] = max(a[i+1], a[i]); 
            a[i+3] = max(a[i+3], a[i]); 
            a[i+5] = max(a[i+5], a[i]); 
        } 
      } 
      if(a[n]>=0){
         cout<<a[n];
         return 0;
      }

      cout<<-1; 
      return 0;
}