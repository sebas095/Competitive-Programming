#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

typedef long long ll;

int main() {
  fast;
  ll m, n, ans = 0;

  while (cin >> m >> n and m > 0 and n > 0) {
    if (n > m) swap(m, n);
    ans = 0;
    for (ll i = n; i <= m; i++) {
      cout << i << " ";
      ans += i;
    }
    cout << "Sum=" << ans << endl;
  }
  return 0;
}
