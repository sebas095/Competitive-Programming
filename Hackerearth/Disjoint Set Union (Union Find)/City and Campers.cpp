#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

int p[100009],size[100009];
set<pair<int,int> >ans;

int find_set(int x){
	return (p[x] == x)? x : p[x] = find_set(p[x]);
}

void union_set(int x, int y){
	int px = find_set(x);
	int py = find_set(y);
	if(px == py) return;

	p[px] = py;
	ans.erase(make_pair(size[px],px));
	ans.erase(make_pair(size[py],py));
	
	size[py] += size[px];
	ans.insert(make_pair(size[py],py));
}

void init(int n){
	for(int i=0; i<n; i++){
		p[i] = i;
		size[i] = 1;
		ans.insert(make_pair(1,i));
	}
}

int main(){
	fast;
	int n,q,u,v;
	cin>>n>>q;
	init(n);
	while(q--){
		cin>>u>>v;
		u--;v--;
		union_set(u,v);
		cout << (*ans.rbegin()).first - (*ans.begin()).first << endl;
	}
	return 0;
}