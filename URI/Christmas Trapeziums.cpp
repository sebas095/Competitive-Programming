#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  int t;
  double q, a, b;

  while (cin >> t and t) {
    int nc = 1;
    while (t--) {
      cin >> q >> a >> b;
      cout << "Size #" << nc << ":" << endl;
      nc++;
      cout << "Ice Cream Used: " << fixed << setprecision(2) << ((a + b) / 2) * (q * 5) << " cm2" << endl;
    }
    cout << endl;
  }
  return 0;
}
