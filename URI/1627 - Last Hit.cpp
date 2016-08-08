#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int t, at, ad, bt, bd, h;
  cin >> t;

  while (t--) {
    int a = 0, b = 0;
    bool ok = true;
    cin >> at >> ad >> bt >> bd >> h;

    while (true) {
      if (a <= b) {
        b -= a;
        h -= at;
        a = ad;
        if (h <= 0) break;
      }
      else {
        a -= b;
        h -= bt;
        b = bd;
        if (h <= 0) {
          ok = false;
          break;
        }
      }
    }

    cout << ((ok)? "Andre" : "Beto") << endl;
  }

  return 0;
}
