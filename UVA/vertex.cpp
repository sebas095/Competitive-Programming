#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

map<int, vector<int> > G;
vector<bool> visited;

void dfs(int start){
	int current;
	for(int i=0; i<G[start].size(); i++){
		current = G[start][i];
		if(!visited[current]){
			visited[current] = true;
			dfs(current);
		}
	}
}

void read(){
	int node, edges;
	while(cin>>node){
		if(node == 0)break;
		while(cin>>edges){
			if(edges == 0)break;
			G[node-1].push_back(edges-1);
		}
	}
}

void print(){
	int nVertex = 0;
	vector<int> ans;
	for(int i=0; i<visited.size(); i++){
		if(!visited[i]){
			nVertex++;
			ans.push_back(i+1);
		}
	}
	if(nVertex == 0)cout<<"0\n";
	else cout<<nVertex<<" ";
	for(int i=0; i<ans.size(); i++){
		if(i == ans.size() - 1)cout<<ans[i]<<endl;
        else cout<<ans[i]<<" ";
    }
}

int main(){
	int nodes,query,starts;
	while(cin>>nodes){
		if(nodes == 0)break;
		G.clear();
		read();
		cin>>query;
		for(int i=0; i<query; i++){
			visited.assign(nodes, false);
			cin>>starts;
			dfs(starts-1);
			print();
		}
	}
	return 0;
}