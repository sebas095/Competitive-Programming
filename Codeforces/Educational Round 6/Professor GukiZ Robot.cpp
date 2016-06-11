#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

int main() {
  fast;
  long long x1, x2, y1, y2, ans;
  cin >> x1 >> y1 >> x2 >> y2;
  cout << max(abs(x1 - x2), abs(y1 - y2)) << endl;
  return 0;
}
