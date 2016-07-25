#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  double a, b, area, porc;

  while (cin >> a and a) {
    int l;
    cin >> b >> porc;
    area = a * b * (100.0 / porc);
    l = (int)sqrt(area);
    cout << l << endl;
  }

  return 0;
}
