#include <bits/stdc++.h>
using namespace std;

typedef long long  ll;

int x;
vector<double> dp;

double f(int i) {
	if (dp[i] > -0.5)
		return dp[i];

	if (i == x)
		return 0;

	double ans = 0.0;
	for (int s = 1; s <= min (x - i, 10); ++s) {
		if (i + s <= x)
			ans += (1 + f(i + s))/(double)min(x - i, 10);
	}
	return dp[i] = ans;
}

int main(int argc, char const *argv[]) {
	int T;
	cin >> T;
	while (T--) {
		dp.assign(5050, -1);
		cin >> x;
		
		cout.precision(12);
		cout << f(0) << endl;
	}

	return 0;
}