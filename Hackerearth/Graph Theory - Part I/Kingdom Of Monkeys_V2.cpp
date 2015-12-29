#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

//PROBLEMA:
//https://www.hackerearth.com/code-monk-graph-theory-i/algorithm/kingdom-of-monkeys/description/

using namespace std;

struct Edge{
	int u;
	int v;
	Edge(){}
	Edge(int _u, int _v): u(_u), v(_v){}
};

int p[100001]; //arbol para el union-find
Edge G[100000]; //Grafo
vector<long long> bananas(100001);

int find_set(int u){
	if(p[u] == u) return u; //si encontro la raiz en el arbol retorna ese nodo 
	return p[u] = find_set(p[u]);
}

void union_set(int u, int v){
	int pu = find_set(u);
	int pv = find_set(v);

	if(pu == pv) return; //Si tienen el mismo padre no hacer nada, porque ya estan conectados

	p[pu] = pv; //Los conectamos a un mismo padre
	bananas[pv] += bananas[pu]; //Modificacion para este problema, 
						//aqui el padre del arbol guardara el costo acumulado
}

void init(int n){
	for(int i=0; i<n; i++){
		p[i] = i; //Inicializo con que cada nodo es su propio padre inicialmente
	}
}

int main(){
	fast;
	int t,n,m,a,b;
	long long ans;
	cin>>t;
	while(t--){
		cin>>n>>m;
		ans = 0;
		init(n); //inicializamos nuestro arbol de union-find

		for(int i=0; i<m; i++){
			cin>>a>>b;
			a--;b--;
			G[i].u = a;
			G[i].v = b;
		}

		for(int i=0; i<n; i++) cin>>bananas[i];

		for(int i=0; i<m; i++){
			union_set(G[i].u,G[i].v); //Empezamos a construir el arbol
		}		

		for(int i=0; i<n; i++){
			ans = max(ans,bananas[find_set(i)]); //Extraemos el costo acumulado de cada padre,es decir de cada isla
		}

		cout<<ans<<endl;
	}
	return 0;
}