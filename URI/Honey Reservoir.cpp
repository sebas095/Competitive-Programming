#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define PI 3.14

using namespace std;

int main() {
  fast;
  double v, d;

  while (cin >> v >> d) {
    double r = d / 2;
    double h = v / (PI * r * r);
    double a =  (PI * r * r);
    cout << fixed;
    cout << "ALTURA = " << setprecision(2) << h << endl;
    cout << "AREA = " << setprecision(2) << a << endl;
  }

  return 0;
}
