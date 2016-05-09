#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, m;
  cin >> n;

  while (n--) {
    int ans = 0;
    cin >> m;
    vector<int> v(m), cpy;
    for (int i = 0; i < m; i++) cin >> v[i];

    cpy = v;
    sort(cpy.rbegin(), cpy.rend());
    for (int i = 0; i < m; i++) {
      if (cpy[i] == v[i]) ans++;
    }

    cout << ans << endl;
  }

  return 0;
}
