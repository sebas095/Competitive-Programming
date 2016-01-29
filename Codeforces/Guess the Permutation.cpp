#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, value;
  bool repeat = false;
  cin >> n;
  vector<int> ans(n, 0);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> value;
      ans[i] = max(ans[i], value);
    }
    if (repeat and ans[i] == n - 1) ans[i] = n;
    if (ans[i] == n - 1) repeat = true;
  }

  for (int i = 0; i < n; i++) {
    cout << ans[i] << " ";
  }
  cout << endl;
  return 0;
}
