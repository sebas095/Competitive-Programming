#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int r(int x, int y) {
	return ((9 * x * x) + (y * y));
}

int b(int x, int y) {
	return ((2 * x * x) + (25 * y * y));
}

int c(int x, int y) {
	return ((-100 * x) + (y * y * y));
}

int main() {
	fast;
	int t, x, y;
	cin >> t;

	while (t--) {
		cin >> x >> y;
		if (r(x, y) > b(x, y) and r(x, y) > c(x, y))      cout << "Rafael ";
		else if (b(x, y) > r(x, y) and b(x, y) > c(x, y)) cout << "Beto ";
		else                                              cout << "Carlos ";
		cout << "ganhou" << endl;
	}

	return 0;
}