#include <bits/stdc++.h>
#define endl '\n'
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)

using namespace std;

int main() {
	fast;
	int a, b, r, q;
	cin >> a >> b;

	if (a < 0 and b < 0) {
		q = ceil(a / (b * 1.0));
		r = q * -b + a;
	}
	else if (b < 0) {
		q = a / b;
		r = a % b;
	}
	else {
		r = a - floor(a / (b * 1.0)) * b;
		q = (a - r) / b;
	}

	cout << q << " " << r << endl;
	return 0;
}
