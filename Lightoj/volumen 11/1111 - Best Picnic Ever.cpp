#include <bits/stdc++.h>

using namespace std;

map<int, vector<int> > G;
vector <bool> visited;
int start[104];
int cont = 0;

int dfs(int u){
	visited[u] = true;
	cont++;
	for(int i=0; i<G[u].size(); i++){
		int curr = G[u][i];
		if(!visited[curr]){
			dfs(curr);
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL);
	int t;
	cin>>t;
	for(int cases=1; cases<=t; cases++){
		G.clear();
		int m,n,k,a,b,reacheable = 10000000;
		cin>>k>>n>>m;
		memset(start,-1,sizeof(start));
		for(int i=0; i<k; i++)cin>>start[i];
		for(int i=0; i<m; i++){
			cin>>a>>b;
			a--;b--;
			G[a].push_back(b);
		}
		for(int i=0; i<k; i++){
			visited.assign(n,false);
			cont = 0;
			dfs(--start[i]);
			reacheable = min(reacheable,cont);
		}
		cout<<"Case "<<cases<<": "<<reacheable<<endl;
	}
	return 0;
}