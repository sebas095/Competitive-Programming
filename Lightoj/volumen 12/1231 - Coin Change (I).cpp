#include <bits/stdc++.h>
#define MOD 100000007

using namespace std;

int n,k;
int memo[52][1002];

int DP(int index, int acum, int *values, int *cant){
	if(acum == k) return 1;
	if(index == n)return 0;
	if(memo[index][acum] != -1) return memo[index][acum];
	
	int ans = 0;

	for(int i=0; i<=cant[index] && (i*values[index] + acum) <= k; i++){
		ans += DP(index+1, i*values[index] + acum, values, cant);
		ans = ans%MOD;
	}

	return memo[index][acum] = ans;
}

int main(){
	int t;
	cin>>t;
	for(int cases=1; cases<=t; cases++){
		memset(memo,-1,sizeof(memo));
		cin>>n>>k;
		int values[n];
		int cant[n];
		for(int i=0; i<n; i++)cin>>values[i];
		for(int i=0; i<n; i++)cin>>cant[i];
		cout<<"Case "<<cases<<": "<<DP(0,0, values, cant)<<endl;
	}
	return 0;
}