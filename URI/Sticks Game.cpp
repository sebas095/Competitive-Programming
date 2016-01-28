#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;
typedef long long ll;

int main() {
  fast;
  int n, c, v;
  while (cin >> n and n) {
    ll ans = 0, acc = 0;
    while (n--) {
      cin >> c >> v;
      ans += v / 4;
      v %= 4;
      if (v >= 2 and acc >= 2) {
        ans++;
        v = 0;
        acc -= 2;
      }
      else if (v >= 2) {
        acc += (v > 2)? 2 : v;
      }
    }
    cout << ans + acc / 4 << endl;
  }
  return 0;
}
