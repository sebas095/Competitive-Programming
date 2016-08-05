#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int q, d, p;

  while (cin >> q and q) {
    cin >> d >> p;
    int ans = (q * d * p) / (p - q);
    cout << ans << ((ans > 1)? " paginas" : " pagina") << endl;
  }

  return 0;
}
