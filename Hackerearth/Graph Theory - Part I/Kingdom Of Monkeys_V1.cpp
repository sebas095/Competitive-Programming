#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

//PROBLEMA:
//https://www.hackerearth.com/code-monk-graph-theory-i/algorithm/kingdom-of-monkeys/description/

using namespace std;

long long cost = 0;

void dfs(int node, vector<vector<int> >&G, vector<bool> &visited, vector<long long> &bananas){
	visited[node] = true;
	cost += bananas[node];

	for(int i = 0; i < G[node].size(); i++){
		int tmp = G[node][i];
		if(!visited[tmp])
			dfs(tmp,G,visited,bananas);
	}
}

int main(){
	fast;
	int t,n,edges,a,b;
	cin>>t;
	while(t--){
		cin>>n>>edges;

		long long ans = 0;
		vector<vector<int> >G(n);
		vector<bool> visited(n,false);
		vector<long long> bananas(n);

		for(int i=0; i<edges; i++){
			cin>>a>>b;
			a--;b--;
			G[a].push_back(b);
			G[b].push_back(a);
		}

		for(int i=0; i<n; i++) cin>>bananas[i];

		for(int i=0; i<n; i++){
			if(!visited[i]){
				cost = 0;
				dfs(i,G,visited,bananas);
				ans = max(ans,cost);	
			}
		}

		cout<<ans<<endl;
	}
	return 0;
}