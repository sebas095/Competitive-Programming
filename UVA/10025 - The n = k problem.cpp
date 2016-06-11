#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int nc, k;
  cin >> nc;

  while (nc--) {
    int acc = 0, n = 0;
    cin >> k;
    k = abs(k);

    for (acc = 0; acc < k; ) acc += (++n);
    if (k & 1) {
      while (!(acc & 1)) {
        n++;
        acc += n;
      }
    }
    else {
      while (acc & 1) {
        n++;
        acc += n;
      }
    }

    if (!k) cout << 3 << endl;
    else cout << n << endl;
    if (nc) cout << endl;
  }
  return 0;
}
