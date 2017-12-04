#include <iostream>
#include <vector>
using namespace std;

int used[1000][1000];
int a[1000][1000];
int st, fi;
vector<int> ve;

void dfs(int v){
	used[v] = 1;

	for(int i=0; i<a[v].size(); i++){
		if(used[v][i] == 0){
			dfs(a[v][i]);

			ve.push_back(v);
		}
	}
}

int main(){
	int n, m;
	cin>>n>>m;

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>st>>fi;
			a[st][fi] = 1;
		}
	}

	dfs(0);
	cout<<ve.size();
	return 0;
}