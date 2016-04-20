#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int t, nc = 0, n, m, a;
  cin >> t;

  while (t--) {
    if (nc) cout << endl;
    cin >> n >> m;
    nc++;
    unordered_map<int, vector<int>> ht;

    while (m--) {
      cin >> a;
      ht[a % n].push_back(a);
    }

    for (int i = 0; i < n; i++) {
      cout << i << " -> ";
      for (auto &it : ht[i]) {
        cout << it << " -> ";
      }
      cout << "\\" << endl;
    }
  }

  return 0;
}
