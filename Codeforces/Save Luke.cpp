#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

typedef long long ll;

int main() {
	fast;
	int d, l, v1, v2;
	double ans = 0.0;
	cin >> d >> l >> v1 >> v2;
	ans = fabs(d - l) / (double)(v1 + v2);
	cout << fixed << setprecision(6) << ans << endl;
	return 0;
}
