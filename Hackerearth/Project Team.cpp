#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main(){
	fast;
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		vector<int> dp(n);
		for(int i = 0; i < n; i++)
			cin >> dp[i];
		
		sort(dp.begin(), dp.end());
		for(int i = 0; i < n/2; i++)
			dp[i] += dp[n - i - 1];

		dp.resize(n/2);
		sort(dp.begin(), dp.end());
		cout << dp[dp.size() - 1] - dp[0] << endl;
	}
	return 0;
}