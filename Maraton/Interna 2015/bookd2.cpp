#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long  ll;
//RPC-team390191
ll s;

ll f(ll n) {
	return s + n;
}

ll bsearch(ll a, ll b, ll v) {
	while (b > a) {
		ll m = (a + b) >> 1;

		if (f(m) == v)
			return m;
		else if (f(m) < v)
			a = m + 1;
		else
			b = m - 1;
	}
	return a;
}

int main(int argc, char const *argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	while (cin >> s) {
		if (s == 0)
			break;

		ll n = floor( (sqrt(8LL*s + 1) - 1)*0.5 ) + 1;
		cout << bsearch(1, n, n*(n + 1) >> 1) << " " << n << endl;
	}

	return 0;
}