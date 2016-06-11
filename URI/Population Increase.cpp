#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int t;
  int pa, pb, cont = 0;
  double g1, g2;
  cin >> t;

  while (t--) {
    cont = 0;
    cin >> pa >> pb >> g1 >> g2;

    while (true) {
      if (pa > pb) break;
      pa += floor(1.0 * pa * g1 / 100.0);
      pb += floor(1.0 * pb * g2 / 100.0);
      cont++;
      if (cont > 100) {
        cont = -1;
        break;
      }
    }

    (cont != -1)? cout << cont << " anos." << endl : cout << "Mais de 1 seculo." << endl;
  }
  return 0;
}
