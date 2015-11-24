#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int countNodes = 0;

void dfs(int node, vector< vector<int> >&G, vector <bool> &visited){
	visited[node] = true;
	for(int i=0; i<G[node].size(); i++){
		int tmp = G[node][i];
		if(!visited[tmp]){
			countNodes++;
			dfs(tmp,G,visited);
		}
	}
}

int main(){
	fast;
	int nodes,edges,a,b, ans = 100000;
	cin>>nodes>>edges;
	vector< vector<int> >G(nodes);
	vector<bool> visited;
	while(edges--){
		cin>>a>>b;
		a--;b--;
		G[a].push_back(b);
	}

	for(int i=0; i<nodes; i++){
		countNodes = 1;
		visited.assign(nodes,false);
		dfs(i,G,visited);
		ans = min(ans,countNodes);
	}

	cout<<ans<<endl;

	return 0;
}