#include <bits/stdc++.h>

using namespace std;

#define D(x,ans) cout<<"Case "<<x<<": "<<ans<<endl

int memo[16][1 << 16];
vector< vector<int> > people;
int n;

int DP(int indexR, int mask){
	if(mask == (1 << 16)-1 || indexR >= n) return 0;
	if(memo[indexR][mask] != -1) return memo[indexR][mask];
	int ans = -9999;
	for(int i=0; i<n; i++){
		if(!(mask & (1 << i)))
			ans = max(ans, DP(indexR+1,mask | 1 << i) + people[indexR][i]);
	}

	return memo[indexR][mask] = ans;
}

int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL);
	int t;
	cin>>t;
	for (int k = 1; k <= t; k++){
		cin>>n;
		people.assign(n,vector<int>(n,0));
		memset(memo,-1,sizeof(memo));
		for(int i=0; i<n; i++)
			for(int j=0; j<n; j++)cin>>people[i][j];

		D(k,DP(0,0));

	}
	return 0;
}

