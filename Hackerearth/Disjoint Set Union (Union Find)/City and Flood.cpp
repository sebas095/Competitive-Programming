#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int p[100009];

int find_set(int x){
	return (x == p[x])? x : p[x] = find_set(p[x]);
}

void union_set(int x, int y){
	int px = find_set(x);
	int py = find_set(y);
	if(px == py)return;
	p[px] = py;
}

void init(int n){
	for(int i=0; i<n; i++)
		p[i] = i;
}

int main(){
	fast;
	set<int> ans;
	int n,k,u,v;
	cin>>n>>k;
	init(n);
	for(int i=0; i<k; i++){
		cin>>u>>v;
		u--;v--;
		union_set(u,v);
	}

	for(int i=0; i<n; i++)
		ans.insert(find_set(i));

	cout<<ans.size()<<endl;
	return 0;
}