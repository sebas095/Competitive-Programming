#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int s, t, f, ans;
  cin >> s >> t >> f;
  ans = s + t + f;
  if (ans >= 0 and ans < 24) cout << ans << endl;
  else if (ans < 0) {
    cout << 24 + ans << endl;
  }
  else {
    cout << ans - 24 << endl;
  }
  return 0;
}
