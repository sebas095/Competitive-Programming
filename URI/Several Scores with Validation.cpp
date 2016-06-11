#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  double x, av = 0.0, av2 = 0.0;
  int cont = 0, cont2 = 0;
  bool flag = true, flag2 = false;

  while (true) {
    cin >> x;
    cout << fixed << setprecision(2);

    if (x == 2) {
      cout << "novo calculo (1-sim 2-nao)" << endl;
      break;
    }

    while (true) {
      if (x >= 0.0 and x <= 10.0) break;
      cout << "nota invalida" << endl;
      cin >> x;
    }

    av += x;
    cont++;
    if (cont == 2 and flag) {
      cout << "media = " << av / 2.0 << endl;
      flag = false;
      av = 0.0;
    }

    else if (!flag) {
      if (x == 1) {
        cout << "novo calculo (1-sim 2-nao)" << endl;
        flag2 = true;
        cont2 = 0;
        av2 = 0.0;
      }
      else if (!flag2) {
        av2 = 0.0;
        cout << "novo calculo (1-sim 2-nao)" << endl;
      }
      else if (flag2) {
        av2 += x;
        cont2++;
        if (cont2 == 2) {
          flag2 = false;
          cont2 = 0;
          cout << "media = " << av2 / 2.0 << endl;
        }
      }
    }
  }

  return 0;
}
