#include <bits/stdc++.h>

using namespace std;

int memo[105][105];

int DP(int i, int j, string &s){
	if(memo[i][j] != -1) return memo[i][j];
	if(i>s.size() || j < 0 || i > j) return 0;
	if( i == j) return 1;
	int ans = 0;
	if(s[i] == s[j]){
		ans = max(ans, DP(i+1, j-1, s)+2);
	}
	else{
		ans = max(ans, DP(i+1, j, s));
		ans = max(ans, DP(i, j-1, s));
	}

	return memo[i][j] = ans;
}

int main(){
	int t;
	cin>>t;
	for(int cases=1; cases<=t; cases++){
		memset(memo, -1, sizeof(memo));
		string s;
		cin>>s;
		cout<<"Case "<<cases<<": "<<s.size()-DP(0,s.size()-1,s)<<endl;
	}
	return 0;
}