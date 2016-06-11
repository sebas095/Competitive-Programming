#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n;
  long long ans = 0;
  cin >> n;

  vector <int> s(n), c(n);
  for (int i = 0; i < n; i++) cin >> s[i];
  for (int i = 0; i < n; i++) cin >> c[i];

  sort(s.begin(), s.end());
  sort(c.begin(), c.end());

  for (int i = 0; i < n; i++) {
    ans += (s[i] + 0LL) * (c[i] + 0LL);
  }
  cout << ans << endl;
  return 0;
}
