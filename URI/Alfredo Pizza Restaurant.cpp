#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  double r, w, l;
  int nc = 0;

  while (cin >> r and r > 0) {
    cin >> w >> l;
    nc++;

    cout << "Pizza " << nc;
    if (sqrt((w * w) + (l * l)) <= 2 * r) cout << " fits on the table.";
    else cout << " does not fit on the table.";

    cout << endl;
  }
  return 0;
}
