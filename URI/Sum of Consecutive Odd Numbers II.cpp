#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

typedef long long ll;

int main() {
  fast;
  ll x, y, ans;
  int t;
  cin >> t;

  while (t--) {
    ans = 0;
    cin >> x >> y;
    if (x > y) swap(x, y);
    for (ll i = x + 1; i < y; i++) {
      if (i & 1) ans += i;
    }
    cout << ans << endl;
  }
  return 0;
}
