#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int t, n, k, ans;
  cin >> t;

  while (t--) {
    cin >> n >> k;
    vector<int> x(n);
    for (int i = 0; i < n; i++) cin >> x[i];

    sort(x.begin(), x.end());
    for (int i = 0; i < (n >> 1); i++)
      x[i] += x[n - 1 - i];

    sort(x.begin(), x.begin() + (n >> 1));
    ans = x[(n >> 1) - 1] - x[0];
    cout << ans << endl;

    if (ans > k) cout << "No more girlfriends!" << endl;
    else if (ans == k) cout << "Lucky chap!" << endl;
    else cout << "Chick magnet Jhool!" << endl;
  }
  return 0;
}
