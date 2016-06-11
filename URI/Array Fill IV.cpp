#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int contI = 0, contP = 0, n = 15, val, indexI = 0, indexP = 0;
  vector<int> impar(5), par(5);

  while (n--) {
    cin >> val;
    if (!(val & 1)) {
      par[contP++] = val;
      if (contP > 4) {
        contP = 0;
        cout << "par[0] = " << par[0] << endl;
        cout << "par[1] = " << par[1] << endl;
        cout << "par[2] = " << par[2] << endl;
        cout << "par[3] = " << par[3] << endl;
        cout << "par[4] = " << par[4] << endl;
      }
    }
    else {
      impar[contI++] = val;
      if (contI > 4) {
        contI = 0;
        cout << "impar[0] = " << impar[0] << endl;
        cout << "impar[1] = " << impar[1] << endl;
        cout << "impar[2] = " << impar[2] << endl;
        cout << "impar[3] = " << impar[3] << endl;
        cout << "impar[4] = " << impar[4] << endl;
      }
    }
  }

  for (int i = 0; i < contI; i++) {
    cout << "impar[" << i << "] = " << impar[i] << endl;
  }

  for (int i = 0; i < contP; i++) {
    cout << "par[" << i << "] = " << par[i] << endl;
  }

  return 0;
}
