#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, m, ans = 0;
  cin >> n >> m;
  vector<int> a(n);

  for (int i = 0; i < n; i++) cin >> a[i];
  sort(a.begin(), a.end(), greater<int>());

  for (int i = 0; i < n; i++) {
    m -= a[i];
    ans++;
    if (m <= 0) break;
  }
  
  cout << ans << endl;
  return 0;
}
