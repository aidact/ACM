#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
    freopen("success.in", "r", stdin);
    freopen("success.out", "w", stdout);
    int n;
    int a[n];
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
        
     if(next_permutation(a,a+n)==false){
         for(int i=1; i<=n; i++){
            cout<<i<<" ";
         }
     }
     else{
        for(int i=0; i<n; i++)
            cout<<a[i]<<" ";
     }

    return 0;
}