#include <bits/stdc++.h>
// #define endl "\n"
using namespace std;

int main(){
	// ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	int a,b;
	map<int,vector<int> > GRAFO;
	map<int,int> apariciones;
	
	for(int i=0; i<n;i++){
		cin>>a>>b;
		GRAFO[a].push_back(b);
		GRAFO[b].push_back(a);
	}
	//Busca un nodo como inicio para el DFS
	int inicio = 0;
	map<int,vector<int> >::iterator it;
	for(it = GRAFO.begin(); it!=GRAFO.end(); it++){
		if(it->second.size()==1){
			inicio = it->first;
			break;
		}
	}
	//DFS
	map<int,bool> visitados;
	stack<int> S;
	S.push(inicio);
	while(!S.empty()){
		cout<<S.top()<<" ";
		int tmp = S.top();
		S.pop();
		visitados[tmp] = true;
		for(int i=0;i<GRAFO[tmp].size();i++){
			int curr = GRAFO[tmp][i];
			if(visitados[curr])continue;
			S.push(curr);
		}
	}
	cout<<endl;
	return 0;
}
