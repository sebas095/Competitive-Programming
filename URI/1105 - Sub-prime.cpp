#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int b, n, d, c, v;

  while (cin >> b >> n and b + n) {
    bool ok = true;
    vector<int> banks(b);

    for (int i = 0; i < b; i++) cin >> banks[i];
    for (int i = 0; i < n; i++) {
      cin >> d >> c >> v;
      banks[d - 1] -= v;
      banks[c - 1] += v;
    }
    for (int i = 0; i < b; i++) {
      if (banks[i] < 0) {
        ok = false;
        break;
      }
    }

    cout << ((ok)? 'S' : 'N') << endl;
  }

  return 0;
}
