#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int t, px, py, qx, qy;
  cin >> t;

  while (t--) {
    int x, y;
    cin >> px >> py >> qx >> qy;

    x = 2 * qx - px;
    y = 2 * qy - py;

    cout << x << " " << y << endl;
  }

  return 0;
}
