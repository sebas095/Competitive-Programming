#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

typedef unsigned long long ull;

int main() {
  fast;
  int n;
  cin >> n;
  vector<ull> v(n);
  ull ans = 0;

  for (int i = 0; i < n; i++) {
    cin >> v[i];
    ans += v[i];
  }
  sort(v.begin(), v.end());

  if (ans & 1) {
    ull tmp = ans;
    for (int i = 0; i < n; i++) {
      tmp = ans - v[i];
      if (!(tmp & 1)) break;
    }
    cout << tmp << endl;
  }
  else cout << ans << endl;

  return 0;
}
