#include <bits/stdc++.h>
#define oo -100000
#define NODES 30009

//http://lightoj.com/volume_showproblem.php?problem=1257
//1257 - Farthest Nodes in a Tree (II)

using namespace std;

struct edge{
	int v;
	int w;
	edge(){}
	edge(int _v, int _w):v(_v),w(_w){}
};

int maxi;
int dist1[NODES];
int dist2[NODES];
vector<edge> G[NODES];

void first_bfs(int u){
	dist1[u] = 0;
	queue<int> q;
	q.push(u);
	while(!q.empty()){
		u = q.front();
		q.pop();
		for(int i=0; i<G[u].size(); i++){
			int v = G[u][i].v;
			int w = G[u][i].w;
			if(dist1[v] == -1){
				dist1[v] = dist1[u] + w;
				q.push(v);
			}
		}
	}
}

void second_bfs(int u){
	dist2[u] = 0;
	queue<int> q;
	q.push(u);
	while(!q.empty()){
		u = q.front();
		q.pop();
		for(int i=0; i<G[u].size(); i++){
			int v = G[u][i].v;
			int w = G[u][i].w;
			if(dist2[v] == -1){
				dist2[v] = dist2[u] + w;
				q.push(v);
			}
		}
	}
}

int main(){
	 ios_base::sync_with_stdio(0); 
	 cin.tie(NULL);
	 int t;
	 cin>>t;
	 for(int cases=1; cases<=t; cases++){
	 	int n,a,b,w,fdeep=0,sdeep=0;
	 	cin>>n;	
	 	
	 	for(int i=0; i<n-1; i++){
	 		cin>>a>>b>>w;
	 		G[a].push_back(edge(b,w));
	 		G[b].push_back(edge(a,w));
	 	}
	 	//Buscamos el nodo donde tenemos la distancia maxima
	 	memset(dist1,-1,sizeof(dist1));
	 	maxi = oo;
	 	first_bfs(0);
	 	//Buscamos el nodo con mayor distancia
	 	for(int i=0; i<n; i++){
	 		if(maxi < dist1[i]){
	 			maxi = dist1[i];
	 			fdeep = i;
	 		}
	 	}
	 	maxi = oo;
	 	memset(dist1,-1,sizeof(dist1));
	 	first_bfs(fdeep);
	 	//Buscamos el nodo con mayor distancia a partir de fdeep
	 	for(int i=0; i<n; i++){
	 		if(maxi < dist1[i]){
	 			maxi = dist1[i];
	 			sdeep = i;
	 		}
	 	}
	 	memset(dist2,-1,sizeof(dist2));
	 	//Se calculan las distancias a partir del nodo sdeep
	 	second_bfs(sdeep);
	 	//Elegimos la mayor distancia entre dist1 y dist2
	 	cout<<"Case "<<cases<<":"<<endl;
	 	for(int i=0; i<n; i++){
	 		cout<<max(dist1[i],dist2[i])<<endl;;
	 	}
	 	
	 }
	 return 0;
}

//FORMA 2:
/*

#define FOR( i, L, U ) for(int i=(int)L ; i<=(int)U ; i++)
#define INF INT_MAX
typedef pair<int,int> ii;
#define NODE 30009
#define NIL -1
 
vector<ii> g[NODE];
int nodes,edges;
int d[NODE];
int ed[NODE];
 
 
void bfs(int u){
    int v,w;
    d[u] = 0;
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        u = q.front();
        q.pop();
    FOR(i,0,g[u].size()-1){
    v = g[u][i].first;
    w = g[u][i].second;
    if(d[v]==NIL){
        d[v] = d[u] + w;
        q.push(v);
        }
    }
    }
}
 
void bfs2(int u){
    queue<int> q;
    int v,w;
    ed[u] = 0;
    q.push(u);
    while(!q.empty()){
        u = q.front();
        q.pop();
    FOR(i,0,g[u].size()-1){
    v = g[u][i].first;
    w = g[u][i].second;
    if(ed[v]==NIL){
        ed[v] = ed[u] + w;
       q.push(v);
        }
    }
    }
}

int main(){
    int test,st,en,dist,w,cs=0;
 
    scanf("%d", &test);
    while(test--){
 
    scanf("%d", &nodes);
    FOR(i,0,nodes-1)g[i].clear();
    FOR(i,0,nodes-2){
        scanf("%d %d %d", &st, &en, &w);
        g[st].push_back(ii(en,w));
        g[en].push_back(ii(st,w));
    }
 
    printf("Case %d:\n", ++cs);
    memset(d,-1,sizeof(d));
 
    bfs(0);
    dist = -1;
    FOR(i,0,nodes-1)if(d[i]>dist){st = i;dist=d[i];}
 
 
 
    memset(d,-1,sizeof(d));
    bfs(st);
    dist = -1;
    FOR(i,0,nodes-1)if(d[i]>dist){en = i;dist=d[i];}
 
    memset(ed,-1,sizeof(ed));
    bfs2(en);
 
    FOR(i,0,nodes-1)printf("%d\n", max(d[i],ed[i]));
 
    }
    return 0;
}*/