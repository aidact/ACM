#include <iostream>
#include <cmath>
#include <queue>
#include <utility>
using namespace std;
 
int n, m, src, dest;
int x, y, z;
int a[1000][1000];
int inf = 100000;
int used[1000];
 
int d[1000];

queue<pair<int, int>>
 
int main(){
    freopen ("distance.in","r",stdin);
    freopen ("distance.out","w",stdout);
    cin>>n>>m>>src>>dest;

    for(int i=1; i<=m; i++){
            cin>>x>>y>>z;
            a[x][y] = z;
            a[y][x] = z;
    }
    for(int i=1; i<=n; i++){
        d[i]=inf;
        used[i]=0;
    }
    d[src]=0;
    for(int i=1; i<=n ; i++){

        int mini_d=inf;
        int u=-1;
        for(int j=0; j<n; j++){

            if(d[j]<=mini_d && used[j] == 0){
                mini_d = d[j];
                u = j;
            }
        }
        used[u] = 1;
        for (int v=1; v<=n; v++){
            if (a[u][v]>0  && used[v] == 0 && d[u] != inf){
                d[v] = min(d[v], d[u] + a[u][v]);
            }
        }
    }
    cout<<d[dest]<<endl;
    
    for (int i=1; i<=n; i++){
        cout<<d[i]<<' ';
    }
    
    return 0;
}