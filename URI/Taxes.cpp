#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int taxe(double &n) {
  if (n >= 0 and n <= 2000.00)       return 0;
  if (n >= 2000.01 and n <= 3000.00) return 1;
  if (n >= 3000.01 and n <= 4500.00) return 2;
  if (n > 4500.00)                   return 3;
}

int main() {
  fast;
  double n;
  double salary [] = {0, 0.08, 0.18, 0.28};
  cin >> n;
  cout << fixed << setprecision(2);

  if (taxe(n) == 0) cout << "Isento" << endl;
  else if (taxe(n) == 1) {
    n -= 2000;
    cout << "R$ " << n * salary[1] << endl;
  }
  else if (taxe(n) == 2) {
    n -= 3000;
    cout << "R$ " << n * salary[2] + 1000 * salary[1] << endl;
  }
  else {
    n -= 4500;
    cout << "R$ " << n * salary[3] + 1500 * salary[2] + 1000 * salary[1] << endl;
  }
  return 0;
}
