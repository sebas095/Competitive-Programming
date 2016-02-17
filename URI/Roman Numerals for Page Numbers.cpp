#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  string unidad[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
  string decena[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
  string centena[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
  int n, u, d, c;

  cin >> n;
  u = n % 10;
  d = int(floor(n / 10)) % 10;
  c = floor(n / 100);

  if (n >= 100) {
    cout << (centena[c] + decena[d] + unidad[u]) << endl;
  }
  else if (n >= 10) {
    cout << (decena[d] + unidad[u]) << endl;
  }
  else cout << unidad[u] << endl;

  return 0;
}
