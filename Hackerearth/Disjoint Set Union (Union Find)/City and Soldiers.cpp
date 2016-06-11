#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int p[100005], u, v;

int find_set(int x){
	return (p[x] == x)? x : p[x] = find_set(p[x]);
}

void union_set(int x, int y){
	int px = find_set(x);
	int py = find_set(y);
	if(px == py) return;
	p[px] = py;
}

void init(int n){
	for(int i=0; i<n; i++)
		p[i] = i;
}

void newLeader(int u){
	p[u] = p[find_set(u)] = u;
}

void query(int op){
	switch(op){
		case 1:{
			cin>>u>>v;
			u--;v--;
			union_set(u,v);
			break;
		}
		case 2:{
			cin>>u;
			u--;
			newLeader(u);
			break;
		}
		case 3:{
			cin>>u;
			u--;
			cout << find_set(u) + 1 << endl;
			break;
		}
	}
}

int main(){
	fast;
	int n,q, opc;
	cin>>n>>q;
	init(n);
	while(q--){
		cin>>opc;
		query(opc);
	}
	return 0;
}