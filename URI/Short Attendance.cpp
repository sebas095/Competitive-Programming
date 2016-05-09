#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int t, n;
  cin >> t;

  while (t--) {
    cin >> n;

    vector<string> names(n), results(n), ans;
    for (int i = 0; i < n; i++) cin >> names[i];
    for (int i = 0; i < n; i++) cin >> results[i];

    for (int i = 0; i < n; i++) {
      int cont1 = 0, cont2 = 0;
      for (int j = 0; j < results[i].size(); j++) {
        if (results[i][j] != 'M') cont1++;
        if (results[i][j] == 'P') cont2++;
      }

      if (cont2 < ceil((double)(cont1 * 0.75))) {
        ans.push_back(names[i]);
      }
    }

    for (int i = 0; i < ans.size(); i++) {
      if (i) cout << " ";
      cout << ans[i];
    }
    cout << endl;
  }

  return 0;
}
