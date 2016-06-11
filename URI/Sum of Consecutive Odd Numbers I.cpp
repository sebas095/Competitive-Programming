#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int x, y, ans = 0;
  cin >> x >> y;
  if (x > y) swap(x, y);

  for (int i = x + 1; i < y; i++) {
    if (i & 1) ans += i;
  }

  cout << ans << endl;
  return 0;
}
