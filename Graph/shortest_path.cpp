#include <iostream>
using namespace std;

int n, st, m;
int a[1000][1000]; //adjastment matrix
int visited[1000];
int d[1000]; // answer for all vertices
int inf = 100000;
int verValue, u;

int dijikstra(){
    for (int i=1; i<=n; i++){
        d[i] = inf;
        visited[i] = 0;
    }
    d[st] = 0; // first vertex
    for (int i=1; i<n; i++){
        verValue = inf;
        u = -1;
        for (int j=1; j<=n; j++){
            if (d[j]<=verValue && visited[j]==0){
                verValue = d[j]; // if current vertex's value is less than infinity
                u = j;
            }
        }
        visited[u]=1;
        for (int v=1; v<=n; v++){
            if (a[u][v]>0  && visited[v]==0 && d[u]!=inf){ // 
                if (d[u] + a[u][v] < d[v]){ // starting vertex + edge weight < finish vertex
                    d[v] = d[u] + a[u][v];
                }
            }
        }
    }
    for(int i=1; i<=n; i++){
        if(d[i]<=10){
            cout<<d[i]<<endl;
        }
        if(d[i] == inf){
            cout<<"*"<<endl;
        }
        if(d[i] >10 && d[i]<inf){
            cout<<"-"<<endl;
        }
        
    }
}

int main(){
    freopen ("path.in","r",stdin);
    freopen ("path.out","w",stdout);
    cin>>n>>m>>st;
    int x, y, weight;
    for(int i=1; i<=m; i++){
            cin>>x>>y>>weight;
            a[x][y] = weight;
    }
    dijikstra();
    return 0;
}