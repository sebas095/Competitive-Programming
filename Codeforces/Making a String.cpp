#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

typedef long long ll;

int main() {
	fast;
	int n, index;
	ll ans = 0;
	map<ll, ll> alp;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> index;
		if (!alp.count(index)) {
			ans += index;
			alp[index] = index;
		}
		else {
			while(alp.count(index) and index > 0) {
				index--;
			}
			if (index > 0) alp[index] = index;
			ans += index;
		}
	}

	cout << ans << endl;
	return 0;
}
