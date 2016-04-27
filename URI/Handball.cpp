#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, m, ans = 0, match;
  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    int tmp = 0;
    for (int j = 0; j < m; j++) {
      cin >> match;
      tmp += (match > 0);
    }
    ans += (tmp == m);
  }

  cout << ans << endl;
  return 0;
}
