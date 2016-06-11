#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n = 2, id, cant;
  double cost, ans = 0.0;

  while (n--) {
    cin >> id >> cant >> cost;
    ans += cant * cost;
  }

  cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << ans << endl;
  return 0;
}
