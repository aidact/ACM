#include <iostream>
 
using namespace std;

int main () {

    int n; 
    int a[50][4];

    cin>>n;
    if(n==0){
        cout<<1;
        return 0;
    }

    a[1][1]=1;
    a[1][2]=1;
    a[1][3]=1;

    for(int i=2; i<=n; i++){
        a[i][1] = a[i-1][1] + a[i-1][3];
        a[i][2] = a[i-1][1] + a[i-1][3] + a[i-1][2];
        a[i][3] = a[i-1][1] + a[i-1][2] + a[i-1][3];
    }

    cout<<a[n][1] + a[n][2] + a[n][3];
    return 0;
}