#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n;

  while (cin >> n) {
    vector<vector<int>> buckets(n + 1, vector<int>(10, 0));
    int dig, q, l, r, ans = 0;

    for (int i = 1; i <= n; i++) {
      cin >> dig;
      buckets[i] = buckets[i - 1];
      buckets[i][dig] += 1;
    }

    cin >> q;
    while (q--) {
      cin >> l >> r;
      ans = 0;

      for (int i = 0; i < 10; i++) {
        if (buckets[r][i] - buckets[l - 1][i] > 0) ans++;
      }
      cout << ans << endl;
    }

  }
  return 0;
}
