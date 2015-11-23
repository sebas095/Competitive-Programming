#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

vector<int> money(10005);
vector<int> p(10005,0);

int find_set(int x){
	if(p[x] == x) return x;
	return p[x] = find_set(p[x]);
}

void union_set(int x, int y){
	int px = find_set(x);
	int py = find_set(y);

	if(px == py) return;
	
	p[px] = py;
	money[py] += money[px];
}

void init(int n){
	p.assign(n, 0);
	money.assign(n, 0);
	
	for(int i=0; i<n; i++)
		p[i] = i;

}

int main(){
	fast;
	int t,n,m,u,v;
	cin>>t;
	while(t--){
		bool flag = true;
		cin>>n>>m;
		init(n);

		for(int i=0; i<n; i++) cin>>money[i];
		for(int i=0; i<m; i++){
			cin>>u>>v;
			union_set(u,v);
		}
		
		for(int i=0; i<n; i++){
			int index = find_set(i);
			if(money[index] != 0){
				flag = false;
				break;
			}
		}

		(flag)? cout<<"POSSIBLE\n" : cout<<"IMPOSSIBLE\n";

	}
	return 0;
}