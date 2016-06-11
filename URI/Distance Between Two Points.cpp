#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  double x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  cout << fixed << setprecision(4) << sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1))) << endl;
  return 0;
}
