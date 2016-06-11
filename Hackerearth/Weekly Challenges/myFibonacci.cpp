#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

int myfibo(int a, int b, int n) {
	vector<int> dp( n + 1, 0 );
	dp[1] = a;
	dp[2] = b;

	for( int i = 3; i <= n; i++) 
		dp[i] = dp[i - 1] + dp[i - 2];
	
	return dp[n];
}

int main() {
	fast;
	int a,b,n;
	cin >> a >> b >> n;
	cout << myfibo(a, b, n) << endl;
	return 0;
}