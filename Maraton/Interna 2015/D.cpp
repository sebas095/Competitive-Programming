#include <bits/stdc++.h>
using namespace std;

typedef long long  ll;
const ll mod = 1000007;

int main(int argc, char const *argv[]) {
	int n, m;
	while(cin >> n >> m) {
		ll h[n];
		for (int i = 0; i < n; ++i)
			cin >> h[i];

		ll poss[m];
		for (int i = 0; i < m; ++i)
			cin >> poss[i];

		for (int i = 0; i < n-1; ++i) {
			if (h[i+1] != 0)
				continue;

			ll i_buy = lower_bound(poss, poss + m, h[i]) - poss;

			if (i_buy != 0) {
				if (abs(poss[i_buy-1] - h[i]) < abs(poss[i_buy] - h[i]))
					i_buy--;
			}
			if (i_buy < n-1) {
				if (abs(poss[i_buy+1] - h[i]) < abs(poss[i_buy] - h[i]))
					i_buy++;
			}

			/*if (i_buy > 0) {
				if (abs(poss[i_buy-1] - mid) < abs(poss[i_buy] - mid))
					i_buy--;
			}*/
			ll buy = poss[i_buy];
			//cout << "->" << i_buy << " " << buy << endl;
			h[i+1] = buy;
			/*if (i != n-2 && !hasCol[i+1]) {
				h[i+1] = buy;
				hasCol[i+1] = true;
			}*/
		}

		ll ans = 0;
		for (int i = 0; i < n-1; ++i) {
			ans += abs(h[i] - h[i+1]);
		}

		cout << ans << endl;
	}

	return 0;
}