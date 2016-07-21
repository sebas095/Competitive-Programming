#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int tc, m, w;
  cin >> tc;

  while (tc--) {
    int ans = 0, acc = 0;
    cin >> m >> w;

    vector<int> eleph(m);
    for (int i = 0; i < m; i++) cin >> eleph[i];
    sort(eleph.begin(), eleph.end());

    for (int i = 0; i < m; i++) {
      acc += eleph[i];
      if (acc <= w) ans++;
      else break;
    }

    cout << ans << endl;
  }

  return 0;
}
