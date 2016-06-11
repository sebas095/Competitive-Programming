#include <bits/stdc++.h>

using namespace std;

int LCS_size(const string &a, const string &b, vector< vector<int> > &dp){
	int m = a.size(), n = b.size();
	if(m == 0 || n == 0) return 0;
	for(int i=0; i<=m; i++)
		dp[i][0] = 0;
	for(int j=1; j<=n; j++)
		dp[0][j] = 0;

	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(a[i] == b[j])
				dp[i+1][j+1] = dp[i][j] + 1;
			else
				dp[i+1][j+1] = max(dp[i+1][j], dp[i][j+1]);
		}
	}

	return dp[m][n];
}

int main(){
	string a,b;
	while(cin>>a>>b){
		vector<vector <int> > dp(a.size()+1,vector<int>(b.size()+1));
		int ans = LCS_size(a,b,dp);
		(a.size()-ans == 0)? cout<<"Yes\n" : cout<<"No\n";
	}
	return 0;
}