#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
	fast;
	int n, cost, ans = 0;
	cin >> n >> cost;
	vector<int> A(n);
	
	for (int i = 0; i < n; i++) cin >> A[i];
	sort(A.begin(), A.end());
	
	for (int i = 0; i < n; i++) {
		if (A[i] <= cost) {
			cost -= A[i];
			ans++;
		}
		else break;
	}
	cout << ans << endl;
	return 0;
}