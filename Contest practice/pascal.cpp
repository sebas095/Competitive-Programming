#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MOD 1000007

using namespace std;

long long modPow(long long a, long long b) {
	long long ans = 1;
	while(b) {
		if (b & 1)
			ans = (ans * a) % MOD;

		a = (a * a) % MOD;
		b >>= 1;
	}
	return ans % MOD;
}

int main() {
	fast;
	long long m, n;
	while (cin>>m>>n && m != -1 && n != -1) {
		cout<<(modPow(2, n + 1) - modPow(2, m) + MOD) % MOD<<endl;
	}

	return 0;
}