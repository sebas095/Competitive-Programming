#include <bits/stdc++.h>
using namespace std;

typedef long long  ll;
const ll inf = (ll)1E9;


ll f(ll a, ll b) {
	if (a == inf)
		return b;
	if (b == inf)
		return a;
	return a ^ b;
}

ll XOR(vector<ll>& p) {
	if (p.size() == 0)
		return 0;

	ll ans = inf;
	for (int i = 0; i < p.size(); ++i) {
		ans = f(ans, p[i]);
	}
	return ans;
}

int main(int argc, char const *argv[]) {
	ll n, k;
	while (cin >> n >> k) {
		
		vector<ll> S(1 << n);
		for (int i = 0; i < S.size(); ++i) 
			S[i] = i;
		
		vector<ll> aux;
		ll c = 0;
		for (int i = 0; i < (1 << S.size()); ++i) {
			aux.clear();
			for (int j = 0; j < S.size(); ++j) {
				if ((i >> j) & 1)
					aux.push_back(S[j]);
			}

			ll ans = XOR(aux);
			if (__builtin_popcountll(ans) == k)
				c++;
		}

		cout << c << endl;
	}

	return 0;
}