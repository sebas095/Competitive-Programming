#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  long double r1, x1, y1, r2, x2, y2;

  while (cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2) {
    long double x = x2 - x1;
    long double y = y2 - y1;
    long double distance = sqrt(x * x + y * y);
    long double ans = distance + r2;
    cout << ((ans <= r1)? "RICO" : "MORTO") << endl;
  }

  return 0;
}
