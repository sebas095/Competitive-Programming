#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

bool isTriangle(double &a, double &b, double &c) {
  bool f1, f2, f3;
  f1 = (a < b + c) and (a > fabs(b - c));
  f2 = (b < a + c) and (b > fabs(a - c));
  f3 = (c < a + b) and (c > fabs(a - b));
  return f1 and f2 and f3;
}

int main() {
  fast;
  double a, b, c;
  cin >> a >> b >> c;
  cout << fixed << setprecision(1);

  if (isTriangle(a, b, c)) {
    cout << "Perimetro = " << a + b + c << endl;
  }
  else {
    cout << "Area = " << (a + b) * c / 2.0 << endl;
  }

  return 0;
}
