#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, d, val;

  while (cin >> n >> d and n + d) {
    vector<int> v(n);
    bool ok = false;

    for (int i = 0; i < d; i++) {
      for (int j = 0; j < n; j++) {
        cin >> val;
        v[j] += val;
      }
    }

    for (int i = 0; i < n; i++) {
      if (v[i] == d) {
        ok = true;
        break;
      }
    }

    cout << ((ok)? "yes" : "no") << endl;
  }

  return 0;
}
