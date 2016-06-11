#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int t, n, m, x, y;

  while (cin >> t and t) {
    cin >> n >> m;

    while (t--) {
      cin >> x >> y;
      x -= n;
      y -= m;
      if (x > 0) {
        if (y < 0)      cout << "SE" << endl;
        else if (y > 0) cout << "NE" << endl;
        else            cout << "divisa" << endl;
      }
      else if (x < 0) {
        if (y < 0)      cout << "SO" << endl;
        else if (y > 0) cout << "NO" << endl;
        else            cout << "divisa" << endl;
      }
      else              cout << "divisa" << endl;
    }
  }

  return 0;
}
