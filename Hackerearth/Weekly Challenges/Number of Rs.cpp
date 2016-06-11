#include <bits/stdc++.h>
#define endl '\n'
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

int main(){
	fast;
	int t;
	string s; 
	cin>>t;
	while(t--){
		int cont = 0, ans = 0;
		cin>>s;
		int win[s.size()];
		int dp[s.size()];
		memset(win,0,sizeof(win));
		memset(dp,0,sizeof(dp));
		for(int i=0; i<s.size(); i++){
			if(s[i] == 'K'){
				win[i] = 1;
			}
			else{
				win[i] = -1;
				cont++;
			}
		}
		ans = dp[0] = win[0];
		for(int i=1; i<s.size(); i++){
			dp[i] = max(win[i], dp[i-1] + win[i]);
			ans = max(ans,dp[i]);
		}
		cout<<ans + cont<<endl;
	}
	return 0;
}