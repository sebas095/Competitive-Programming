#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int t;
  cin >> t;

  while (t--) {
    bool ok = false;
    int n, win, val, index = 0;
    cin >> n >> win;
    vector<int> pos(n), dif(n);

    for (int i = 0; i < n; i++) {
      cin >> val;
      if (val == win and !ok) {
        ok = true;
        index = i + 1;
      }
      dif[i] = abs(win - val);
      pos[i] = dif[i];
    }

    if (ok) cout << index << endl;
    else {
      sort(dif.begin(), dif.end());
      for (int i = 0; i < n; i++) {
        if(dif[0] == pos[i]) {
          cout << i + 1 << endl;
          break;
        }
      }
    }
  }

  return 0;
}
