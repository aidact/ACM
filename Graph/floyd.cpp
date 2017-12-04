#include <iostream>
#include <cmath>
using namespace std;

int n;
int a[1000][1000];

int floyd(){
    for (int k=1; k<=n; k++){ // the third vertex between start and finish
        for (int i=1; i<=n; i++){ 
            for (int j=1; j<=n; j++){
                a[i][j] = min(a[i][j], a[i][k]+a[k][j]);
            }
        }
    }
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            cout<<a[i][j]<<' ';
        }
        cout<<endl;
    }
}

int main(){
    freopen ("floyd.in","r",stdin);
    freopen ("floyd.out","w",stdout);
	cin>>n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin>>a[i][j];
		}
	}
	floyd();
	return 0;
}