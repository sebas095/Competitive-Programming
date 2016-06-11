#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int x1, y1, x2, y2;

  while (cin >> x1 >> y1 >> x2 >> y2 and (x1 + x2 + y1 + y2)) {
    int ans1 = abs(x1 - x2);
    int ans2 = abs(y1 - y2);

    if (!ans1 and !ans2) cout << "0" << endl;
    else {
      // Diagonal, Horizontal o Vertical
      if (ans1 == ans2 or ans1 == 0 or ans2 == 0) cout << "1" << endl;
      else cout << "2" << endl;
    }
  }
  return 0;
}
