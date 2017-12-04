#include <iostream>
 
using namespace std;

int a[10][10], b[10][10], used[10][10];
int inf = 10000;

int path(int x, int y){
 
    if (x<1 || y<1 || x>8 || y>8)
        return inf;
     
    if (x==1 && y==8)
        return a[x][y];
     
    if (used[x][y]) 
         return b[x][y];
      
    used[x][y] = 1;
    int res = min(path(x-1, y), min(path (x-1, y+1), path(x, y+1))) + a[x][y];
    b[x][y] = res;
     
    return b[x][y];
 }

int main (){
    freopen("king2.in", "r", stdin);
    freopen("king2.out", "w", stdout);

    int x, y, res;
     
    for(int i=1; i<=8; i++)
        for(int j=1; j<=8; j++)
            cin >> a[i][j];

    x=8; 
    y=1;  
    res=0;  
      
    res=path(x, y);
      
    cout<<res;
    return 0;
}