#include <bits/stdc++.h>
#define oo -100000

//http://lightoj.com/volume_showproblem.php?problem=1094
//1094 - Farthest Nodes in a Tree

using namespace std;

vector<bool> visited;
int maxi;
int node;

struct edge{
	int v;
	int w;
	edge(){}
	edge(int _v, int _w):v(_v),w(_w){}
};

void dfs(int start,int dist, vector< vector<edge> > &G){
	if(dist > maxi){
		maxi = dist;
		node = start;
	}
	for(int i=0; i<G[start].size(); i++){
		edge current = G[start][i];
		if(!visited[current.v]){
			visited[current.v] = true;
			dfs(current.v,dist+current.w, G);
		}
	}

}

int main(){
	 ios_base::sync_with_stdio(0); 
	 cin.tie(NULL);
	 int t;
	 cin>>t;
	 for(int cases=1; cases<=t; cases++){
	 	int n,a,b,w,init=0,end=0;
	 	cin>>n;	
	 	vector< vector<edge> > G(n);
	 	visited.assign(n,false);
	 	for(int i=0; i<n-1; i++){
	 		cin>>a>>b>>w;
	 		G[a].push_back(edge(b,w));
	 		G[b].push_back(edge(a,w));
	 	}
	 	//Buscamos el nodo donde tenemos la distancia maxima
	 	maxi = oo;
	 	visited[0] = true;
	 	dfs(0,0,G);
	 	init = node; //Nodo encontrado
	 	visited.assign(n,false);
	 	visited[init] = true;
	 	maxi = oo;
	 	//Buscamos la distancia maxima desde el nodo encontrado
	 	dfs(init,0,G);
	 	cout<<"Case "<<cases<<": "<<maxi<<endl;
	 }
	 return 0;
}