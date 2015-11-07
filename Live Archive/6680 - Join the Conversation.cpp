#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

int toInt(string &x){
	stringstream ss;
	ss << x;
	int r;
	ss >> r;
	return r;
}

void dfs(int u,vector< vector<int> > &G,vector<bool> &visited, int &deep){
	visited[u] = true;
	deep += 1;
	for(int i=0; i<G[u].size(); i++){
		int tmp = G[u][i];
		if(!visited[tmp]){
			dfs(tmp,G,visited,deep);
		}
	}
}

int main(){
	int n;
	string buffer;
	while(getline(cin,buffer)){
		n = toInt(buffer);
		int id = 0;
		map<string, int> decode;
		map<string, int>::iterator it;
		vector<string> chat(n);
		string tmp;

		//Mapeamos el string con un id
		for(int i=0; i<n; i++){
			getline(cin,tmp);
			chat[i] = tmp;
			stringstream ss(tmp);
			ss >> tmp;
			it = decode.find(tmp);
			if(it == decode.end()){
				decode[tmp] = id;
				id++;
			}
		}

		vector< vector<int> > G(id+1);
		vector<bool> visited(id+1, false);

		//contruimos el grafo a partir del mapeo anteior
		string node,edges;
		for(int i=0; i<n; i++){
			tmp = chat[i];
			stringstream ss(tmp);
			ss >> node;
			while(ss >> edges){
				if(edges[0] == '@'){
					G[decode[node]].push_back(decode[edges+":"]);
				}
			}
		}

		//Hacemos el dfs dejando la ruta de maxima profundidad
		int maxi = 0, init = 0, deep = 0;
		for(int i=0; i <= id; i++){
			visited.assign(id+1, false);
			deep = 0;
			//Buscamos el nodo con la maxima profundidad
			dfs(i,G,visited,deep);
			if(deep > maxi){
				maxi = deep;
				init = i;
			}			
		}

		//Visitamos los nodos donde la ruta es la de mayor profundidad
		visited.assign(id+1, false);
		dfs(init,G,visited, deep);

		printf("%d\n",maxi);
		for(int i=0; i<visited.size(); i++){
			if(visited[i]){
				printf("%d",i+1);
				if(i<visited.size()-1)printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}