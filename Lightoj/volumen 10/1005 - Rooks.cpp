#include <bits/stdc++.h>

using namespace std;

long long memo[35][35*35];

long long DP(int n, int k){
	if(k == 0)return 1;
	if(k > n)return 0;
	if(memo[n][k] != -1) return memo[n][k];
	long long ans = 1;
	ans = n*n*ans*DP(n-1,k-1)/k;
	return memo[n][k] = ans;
}

int main(){
	int t;
	cin>>t;
	memset(memo,-1,sizeof(memo));
	for(int cases = 1; cases<=t; cases++){
		long long n,k;
		cin>>n>>k;
		cout<<"Case "<<cases<<": "<<DP(n,k)<<endl;
	}
	return 0;
}