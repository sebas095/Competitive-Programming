#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;
typedef long long ll;

int main() {
  fast;
  ll x, y, ans = 0;
  cin >> x >> y;
  if (x > y) swap(x, y);

  for (ll i = x; i <= y; i++) {
    if (i % 13) ans += i;
  }

  cout << ans << endl;
  return 0;
}
