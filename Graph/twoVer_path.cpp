#include <iostream>
#include <cmath>
using namespace std;
 
int n, m, st, fi;
int a[1000][1000]; //adjastment matrix
int visited[1000];
int d[1000]; // answer for all vertices
int inf = 1000;
int verValue, u;

int dijikstra(){
    for (int i=1; i<=n; i++){
        d[i] = inf;
        visited[i] = 0;
    }
    d[st] = 0; // first vertex
    for (int i=1; i<=n; i++){
        verValue = inf;
        u = -1;
        for (int j=1; j<=m; j++){
            if (d[j]<=verValue && visited[j]==0){
                verValue = d[j]; // if current vertex's value is less than infinity
                u = j;
            }
        }
        visited[u]=1;
        for (int v=1; v<=n; v++){
            if (a[u][v]>0  && visited[v]==0 && d[u]!=inf){ //
                d[v] = min(d[v], d[u] + a[u][v]);
            }
        }
    }
    if(d[fi] != inf)
        cout<<d[fi]<<endl;
    //for(int i=1; i<=n; i++)
       // cout<<d[i]<<' ';
}
 
int main(){
    //freopen ("dijkstra.in","r",stdin);
    //freopen ("dijkstra.out","w",stdout);

    cin>>n>>m>>st>>fi;
    int x, y, z;
        for (int j=1; j<=m; j++){
            cin>>x>>y>>z;
            a[x][y] = z;
            a[y][x] = z;
        }

    dijikstra();
    return 0;
}
