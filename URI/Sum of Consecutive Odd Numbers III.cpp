#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

typedef long long ll;

int main() {
  fast;
  int n;
  ll x, y, ans = 0;
  cin >> n;

  while (n--) {
    ans = 0;
    cin >> x >> y;
    if (x & 1) {
      ans += x;
      y--;
    }
    else x--;

    for (int i = 0; i < y; i++) {
      x += 2;
      ans += x;
    }

    cout << ans << endl;  
  }
  return 0;
}
