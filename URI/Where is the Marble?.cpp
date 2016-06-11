#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, q, qi, nc = 0;

  while (cin >> n >> q and n + q) {
    vector<int> balls(n);
    for (int i = 0; i < n; i++) cin >> balls[i];
    sort(balls.begin(), balls.end());
    map<int, int> ans;
    nc++;

    cout << "CASE# " << nc << ":" << endl;

    for (int i = 0; i < n; i++) {
      if (!ans.count(balls[i])) {
        ans[balls[i]] = i;
      }
    }

    while (q--) {
      cin >> qi;
      if (ans.count(qi)) {
        cout << qi << " found at " << ans[qi] + 1 << endl;
      }
      else cout << qi << " not found" << endl;
    }
  }

  return 0;
}
