#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
    freopen("perm.in", "r", stdin);
    freopen("perm.out", "w", stdout);
    int n;
    int a[n];
    cin>>n;
    
    for(int i=0; i<n; i++)
        a[i] = i+1;
    
    do {
        for(int i=0; i<n; i++)
        cout << a[i]<<" ";
    cout<<'\n';
    }
     while ( next_permutation(a,a+n) );

    return 0;
}