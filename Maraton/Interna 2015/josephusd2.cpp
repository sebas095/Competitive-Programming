#include <bits/stdc++.h>
using namespace std;

typedef long long  ll;
const ll mod = 1000007;

ll joseph(int n, int k) {
	vector<ll> st(n);
	for (int i = 0; i < n; ++i)
		st[i] = i + 1;

	ll act = 0, dir = 1;

	while(st.size() > 1) {
		if (dir == 1)
			act = (act - 1 + st.size())%st.size();

		act = (act + dir*(k-1) + st.size()) % st.size();
		st.erase(st.begin() + act);
		
		dir *= -1;
	}
	return st[0];
}

int main(int argc, char const *argv[]) {
	ll n, k;
	while (cin >> n >> k) {
		if (k==n && n==0)
			break;

		cout << joseph(n, k) + 1<< endl;
	}

	return 0;
}