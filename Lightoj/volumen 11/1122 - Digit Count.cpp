#include <bits/stdc++.h>

using namespace std;

#define D(x,ans) cout<<"Case "<<x<<": "<<ans<<endl

long long int memo[11][11];
vector <int> digits;
int n,m;

long long int DP(int count, int index){
	if(count == 1) return 1LL;
	if(memo[count][index] != -1) return memo[count][index];

	long long int ans = 0;
	for(int i=0; i<m; i++){
		if(fabs(digits[index] - digits[i]) <= 2)
			ans += DP(count-1, i);
	}

	return memo[count][index] = ans;
}

int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL);
	int t;
	cin>>t;
	for (int cases = 1; cases <= t; cases++){
		long long int sol = 0;
		memset(memo,-1,sizeof(memo));
		cin>>m>>n;
		digits.assign(m,0);
		for(int i=0; i<m; i++)cin>>digits[i];
		for(int i=0; i<m; i++) sol += DP(n,i);
		D(cases,sol);
	}

	return 0;
}