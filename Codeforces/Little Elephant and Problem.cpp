#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

int main() {
	fast;
	int n, ans = 0, ai;
	cin >> n;
	vector <int> ord(n), arr(n);

	for (int i = 0; i < n; i++) {
		cin >> ai;
		ord[i] = arr[i] = ai;
	}

	sort(ord.begin(), ord.end());
	for (int i = 0; i < n; i++)
		if (ord[i] != arr[i]) ans++;

	(ans > 2)? cout << "NO" << endl : cout << "YES" << endl;
	return 0;
}
