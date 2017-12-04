#include <iostream>
#include <algorithm>
using namespace std;
int a[100];
int n;

void rec(int x){
    if (x==n)
    {
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<"\n";
    }
    else
    { 
        for(int j=x;j<n;j++)
        {
            swap(a[x],a[j]);
            rec(x+1);
            swap(a[x],a[j]);
        }
    }
}
 
int main(){
    cin>>n;
    for(int i=0;i<n;i++)
        a[i]=i+1;
    rec(0);
    return 0;
}