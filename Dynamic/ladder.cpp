#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

 int main(){
  freopen ("ladder.in","r",stdin);
  freopen ("ladder.out","w",stdout);

    int n;
    cin >> n;
    int a[n], b[n];
    for(int i=1; i<=n; ++i) {
     	cin>>a[i];
    }
    b[1]=a[1];
    b[2]=max(a[1]+a[2], a[2]);
    
    for(int i=3; i<=n; ++i) {
     	b[i]=max(b[i-2]+a[i], b[i-1]+a[i]);
    }
    cout<<b[n]; 
    return 0;
 }