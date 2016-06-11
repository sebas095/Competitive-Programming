#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int x, y;
  map<int, double> products;
  products[1] = 4.00;
  products[2] = 4.50;
  products[3] = 5.00;
  products[4] = 2.00;
  products[5] = 1.50;
  cin >> x >> y;
  cout << "Total: R$ " << fixed << setprecision(2) << products[x] * y << endl;
  return 0;
}
