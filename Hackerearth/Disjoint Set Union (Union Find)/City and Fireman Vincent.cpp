#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MOD (1e9 + 7)
#define OO 100000

using namespace std;

int p[1005], e[1005];
vector<int>minRisk(1005,OO), ablaze(1005,0);
set<int>parent;

long long mult(long long a, long long b, long long mod){
	long long ans = 0;
	while(b){
		if(b & 1){
			ans += a;
			ans %= mod;
		}
		a <<= 1;
		a %= mod;
		b >>= 1;
	}
	return ans;
}

int find_set(int x){
	return (x == p[x])? x : p[x] = find_set(p[x]);
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

long long solve(int n){
	int ans = 1;
	for(int i=0; i<n; i++){
		minRisk[find_set(i)] = min(minRisk[find_set(i)],e[i]);
		parent.insert(find_set(i));
	}
	for(int i=0; i<n; i++){
		if(e[i] == minRisk[find_set(i)])
			ablaze[find_set(i)]++;
	}
	for(auto &it : parent){
		ans = mult(ans,ablaze[find_set(it)],MOD);
	}
	return ans;
}

int main(){
	fast;
	int n,k,u,v;
	
	cin>>n;
	init(n);
	for(int i=0; i<n; i++) cin>>e[i];
	
	cin>>k;
	while(k--){
		cin>>u>>v;
		u--;v--;
		union_set(u,v);
	}

	cout << solve(n) << endl;
	return 0;
}