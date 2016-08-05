#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int t, n, a, b;
  cin >> t;

  while (t--) {
    int ans = 0;
    cin >> n;
    map<int, vector<int>> group;

    for (int i = 0; i < n; i++) {
      cin >> a >> b;
      group[a].push_back(b);
    }

    for (auto &it : group) {
      int max1 = 0, max2 = 0;
      for (int i = 0; i < it.second.size(); i++) {
        max1 = max(max1, it.second[i]);
        if (it.second[i] >= 10 and it.second[i] <= 100 and it.second[i] > max2) {
          max2 = it.second[i];
        }
      }
      ans += (max2)? max2 : max1;
    }

    cout << ans << endl;
  }

  return 0;
}
