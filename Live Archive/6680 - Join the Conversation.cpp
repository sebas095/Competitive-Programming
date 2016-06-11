#include <bits/stdc++.h>
#define endl '\n'
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

//https://icpcarchive.ecs.baylor.edu/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=4692

using namespace std;

int toInt(string &x){
	stringstream ss;
	ss << x;
	int r;
	ss >> r;
	return r;
}

int find(int node,vector< vector<int> > &G, vector<int> &dist){
	if(dist[node] != -1)
		return dist[node];

	int best = 1;
	for(int i=0; i<G[node].size(); i++){
		best = max(best, find(G[node][i],G,dist) + 1);
	}

	return dist[node] = best;
}

void dfs(int node,vector< vector<int> > &G,vector<int> &dist, vector<int> &ans){
	for(int i=0; i<G[node].size(); i++){
		if((find(G[node][i],G,dist) + 1) == dist[node]){
			ans.push_back(G[node][i]);
			dfs(G[node][i],G,dist,ans);
			return;
		}
	}
}

void buildGraph(vector< vector<int> > &G, int n){
	map<string, vector<int> > decode;
	string line;
	for(int k=0; k<n; k++){
		getline(cin,line);

		int index = line.find(':');
		string name = line.substr(0,index);
		index++;

		stringstream ss(line.substr(index));
		decode[name].push_back(k);

		while(ss >> line){
			if(line[0] == '@'){
				if(line == name)continue; // eliminamos ciclos
				for(int i=0; i<decode[line].size(); i++){
					G[decode[line][i]].push_back(k); // edges
				}
			}
		}
	}
}

int main(){
	fast;
	int n;
	string buffer;
	while(getline(cin,buffer)){
		n = toInt(buffer);

		vector< vector<int> > G(n);
		buildGraph(G,n);
		vector<int> dist(n,-1);
		vector<int> ans;
		
		//Hacemos el dfs dejando la ruta de maxima profundidad
		int best = 0, idx = -1;
		for(int i=0; i < n; i++){
			int t = find(i,G,dist);
			//Buscamos el nodo con la maxima profundidad
			if(best < t){
				best = t;
				idx = i;
			}
		}

		//Visitamos los nodos donde la ruta es la de mayor profundidad
		cout<<best<<endl;
		cout<<idx + 1;
		dfs(idx,G,dist,ans);
		for(int i=0; i<ans.size(); i++){
			cout<<" "<<ans[i]+1;
		}
		cout<<endl;
	}
	return 0;
}