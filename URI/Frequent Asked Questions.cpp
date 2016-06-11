#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, k, val;

  while (cin >> n >> k and n + k) {
    vector<int> p(103, 0);
    int ans = 0;

    for (int i = 0; i < n; i++) {
      cin >> val;
      p[val]++;
    }

    for (int i = 0; i < p.size(); i++) {
      if (p[i] >= k) ans++;
    }
    cout << ans << endl;
  }
  return 0;
}
