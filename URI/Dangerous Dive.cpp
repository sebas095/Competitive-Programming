#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int r, n, p;

  while (cin >> r >> n) {
    vector<bool> seen(r, false);
    bool ok = true;

    while (n--) {
      cin >> p;
      seen[p - 1] = true;
    }

    for (int i = 0; i < r; i++) {
      if (!seen[i]) {
        cout << i + 1 << " ";
        ok = false;
      }
    }

    cout << ((ok)? "*" : "") << endl;
  }
  return 0;
}
