#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
    freopen("inverse.in", "r", stdin);
    freopen("inverse.out", "w", stdout);
    int n;
    int a[n];
    cin>>n;
    int b[n];
    int t;
    for(int i=1; i<=n; i++)
        cin>>a[i];
        
    for(int i=1; i<=n; i++){
        t=a[i];
        b[t] = i;
    }
    for(int i=1; i<=n; i++)
        cout<<b[i]<<" ";


    return 0;
}