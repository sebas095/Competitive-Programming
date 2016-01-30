#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  string employ;
  double sal, porc;
  cin >> employ >> sal >> porc;
  cout << "TOTAL = R$ " << fixed << setprecision(2) << sal + (porc * 0.15) << endl;
  return 0;
}
