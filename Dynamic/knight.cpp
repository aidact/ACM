#include <iostream>
#include <stdio.h>
#include <string.h>
 
using namespace std;

int main () {
	 freopen ("knight.in", "r", stdin);
	 freopen ("knight.out", "w", stdout);
	 
	 int n, m;
	 int a[1000][1000];

	 memset(a, 0, sizeof (a));

	 cin>>n>>m;

	 a[1][1] = 1;

     for(int i=1; i<=n; i++){
     	for(int j=1; j<=m; j++){
          a[i+1][j+2]+=a[i][j];
          a[i+2][j+1]+=a[i][j];
        }
     }
    cout<<a[n][m];  
    return 0;  
}