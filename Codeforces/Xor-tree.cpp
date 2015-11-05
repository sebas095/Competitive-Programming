#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

//Xor-tree
//http://codeforces.com/problemset/problem/430/C

using namespace std;

bool visited[100010];
bool init[100010];
bool end[100010];
vector<int> solve;
vector <vector <int> >G;

void dfs(int node, int deep, int even, int odd){
	visited[node] = true;
	
	int sum = (deep & 1)? odd : even;
	int tmp = init[node] + sum;
	bool flag = (tmp & 1); //True si tmp es impar de lo contrario es falso

    if(end[node] != flag){
        solve.push_back(node);
        if(deep & 1)odd++;
        else even++;
    }

	for(int i=0; i<G[node].size(); i++){
		int tmp = G[node][i];
		if(!visited[tmp]){
			dfs(tmp,deep + 1,even,odd);
		}
	}
}

int main(){
	fast;
	int edges,u,v,n;
	cin>>edges;
	n = edges;
	G.resize(edges);
	edges--;
	while(edges--){
		cin>>u>>v;
		u--;v--;
		G[u].push_back(v);
		G[v].push_back(u);
	}
	memset(visited,false,sizeof(visited));
	for(int i=0; i<n; i++) cin>>init[i];
	for(int i=0; i<n; i++) cin>>end[i];
	dfs(0,0,0,0);
	cout<<solve.size()<<endl;
	for(int i=0; i<solve.size(); i++)cout<<solve[i]+1<<endl;
	return 0;
}