#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define oo 40000000000LL

using namespace std;

typedef long long ll;

bool solve(ll a, ll b, ll c) {
  ll sum = a + b + c;
  vector<ll> med = {a, b, c};
  sort(med.begin(), med.end());
  if ((sum / 3 == med[1]) and (sum % 3 == 0)) return true;
  return false;
}

int main() {
  fast;
  ll a, b, c;

  while (cin >> a >> b and a + b) {
    ll ans = oo;
    if (solve(a, b, 2 * b - a)) ans = min(ans, 2 * b - a);
    if (solve(a, b, 2 * a - b)) ans = min(ans, 2 * a - b);
    if (solve(a, b, (a + b) / 2)) ans = min(ans, (a + b) / 2);
    cout << ans << endl;
  }

  return 0;
}
