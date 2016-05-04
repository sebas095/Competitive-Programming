#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, m, t;

  while (cin >> n >> m and m + n) {
    vector<int> bucket(n);
    int ans = 0;

    while (m--) {
      cin >> t;
      bucket[t - 1]++;
    }

    for (int i = 0; i < n; i++) {
      if (bucket[i] > 1) {
        ans++;
      }
    }
    cout << ans << endl;
  }

  return 0;
}
