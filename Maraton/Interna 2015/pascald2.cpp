#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long  ll;
const ll mod = 1000007;

ll modPow(ll a, ll b) {
	ll ans = 1;
	while(b) {
		if (b & 1)
			ans = (ans * a) % mod;
		a = (a * a) % mod;
		b >>= 1;
	}
	return ans % mod;
}

int main(int argc, char const *argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll m, n;
	while (cin >> m >> n) {
		if (m==n && n==-1)
			break;

		cout << (modPow(2, n + 1) - modPow(2, m) + mod) % mod << endl;
	}

	return 0;
}