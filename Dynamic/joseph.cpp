#include <iostream>
  
using namespace std;

int joseph (int n, int p) {
    if(n==1) {
        return 1;
    }
    else return (joseph(n-1, p)+ p-1)% n +1;
}
 
int main(){
	freopen ("joseph.in","r",stdin);
	freopen ("joseph.out","w",stdout);
    int n, p;
    cin>>n>>p;
    cout<<joseph(n, p);
    return 0;    
}