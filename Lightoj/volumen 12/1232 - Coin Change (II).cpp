#include <bits/stdc++.h>
#define MOD 100000007

using namespace std;

long long n,k;
long long ans[10002];
long long values[102];

long long DP(){
	ans[0] = 1;
	for(int index=1; index<=n; index++){
		for(int acum=1; acum<=k; acum++){
			if(values[index] <= acum) ans[acum] += ans[acum - values[index]]; 
			if(ans[acum] > MOD) ans[acum] %= MOD;
		}
	}
	return ans[k];
}

int main(){
	int t;
	cin>>t;
	for(int cases=1; cases<=t; cases++){
		memset(ans,0,sizeof(ans));
		cin>>n>>k;
		for(int i=1; i<=n; i++)cin>>values[i];
		cout<<"Case "<<cases<<": "<<DP()<<endl;
	}
	return 0;
}
