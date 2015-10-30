#include <bits/stdc++.h>

using namespace std;

//1141 - Number Transformation http://lightoj.com/volume_showproblem.php?problem=1141

int S,T;
vector<int> G[1002]; //Grafo formado con los factores primos
int dist[1002]; //Distancia 

struct Node{
	int u;
	int dist;
	Node(){}
	Node(int _u, int _dist):u(_u),dist(_dist){}
};

void primeFactor(int u){
	int num = u;
	int div = 2, fact = 0;
	while(u > 1){
		while(u%div == 0){
			fact = div;
			u /= div;
		}
		if(div != num && fact != 0)G[num].push_back(fact);
		if(u <= 1)break;
		while(u%div != 0)div++;
	}
}

//Visualizar el grafo
void view(){
	for(int i=0; i<1002; i++){
		cout<<i<<": ";
		for(int j=0; j<G[i].size(); j++){
			cout<<G[i][j]<<" ";
		}
		cout<<endl;
	}
}

int BFS(int u){
	memset(dist,-1,sizeof(dist));
	queue<Node> q;
	dist[u] = 0;
	q.push(Node(u,0));
	while(!q.empty()){
		Node current = q.front();
		q.pop();
		for(int i=0; i<G[current.u].size(); i++){
			int tmp = G[current.u][i]+current.u;
			if(tmp <= T && dist[tmp] == -1){
				dist[tmp] = current.dist + 1;
				q.push(Node(tmp,dist[tmp]));
				if(T == tmp){
					return dist[T];
				}
			}
		}
	}
	return dist[T];
}

int main(){
	int t;
	cin>>t;
	for(int i=0; i<1002; i++)primeFactor(i); //Se llena el grafo de factores primos
	for(int casos=1; casos<=t; casos++){
		cin>>S>>T;
		cout<<"Case "<<casos<<": "<<BFS(S)<<endl;
	}
	return 0;
}