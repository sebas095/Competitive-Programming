#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  double a, b, c, discriminate = 0;
  cin >> a >> b >> c;

  discriminate = (b * b) - (4 * a * c);
  if (discriminate < 0 or a == 0) cout << "Impossivel calcular" << endl;
  else {
    double r1 = (-b + sqrt(discriminate)) / (2 * a);
    double r2 = (-b - sqrt(discriminate)) / (2 * a);
    cout << fixed << setprecision(5) << "R1 = " << r1 << endl << "R2 = " << r2 << endl;
  }

  return 0;
}
