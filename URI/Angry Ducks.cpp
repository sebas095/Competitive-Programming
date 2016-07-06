#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

const double G = 9.80665;
const double PI = 3.14159;

double toRadian(double alpha) {
  return ((double)alpha * PI) / 180.0;
}


int main() {
  fast;
  cout << fixed;
  cout.precision(5);
  int n;
  double alpha, h, p1, p2, v0;

  while (cin >> h >> p1 >> p2 >> n) {
    while (n--) {
      cin >> alpha >> v0;
      double t = v0 / G;
      double ans;
      double z = (G * h) / (v0 * v0);

      t *= (sin(toRadian(alpha)) + sqrt(sin(toRadian(alpha)) * sin(toRadian(alpha)) + 2.0 * z));
      ans = (v0 * cos(toRadian(alpha))) * t;

      cout << ans << " -> ";
      if (ans >= p1 and ans <= p2) {
        cout << "DUCK" << endl;
      }
      else cout << "NUCK" << endl;
    }
  }

  return 0;
}
