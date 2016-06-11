#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

typedef long long ll;

int main() {
  fast;
  int n;

  while (cin >> n and n) {
    ll ans = 0;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    n--;

    for (int i = 0; i < n; i++) {
      ans += abs(v[i]);
      v[i + 1] += v[i];
    }

    cout << ans << endl;
  }

  return 0;
}
