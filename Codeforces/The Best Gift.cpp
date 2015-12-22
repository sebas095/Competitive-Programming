#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, m, ai, ans = 0;
  cin >> n >> m;
  vector<int> bucket(m);

  for (int i = 0; i < n; i++) {
    cin >> ai;
    ai--;
    bucket[ai]++;
  }

  for (int i = 0; i < m; i++) {
    for (int j = i + 1; j < m; j++) {
      ans += bucket[i] * bucket[j];
    }
  }

  cout << ans << endl;
  return 0;
}
