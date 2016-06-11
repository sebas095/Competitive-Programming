#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  string n, m, sh, type, size;
  int nc = 1;

  while (getline(cin, n)) {
    if (nc > 1) cout << endl;
    map<string, int> shoes;
    getline(cin, sh);
    stringstream ss(sh);

    while (ss >> m) {
      size = m;
      ss >> type;
      if (m == n) {
        shoes[type]++;
      }
    }

    cout << "Caso " << nc << ":" << endl;
    cout << "Pares Iguais: " << shoes["F"] + shoes["M"] << endl;
    cout << "F: " << shoes["F"] << endl;
    cout << "M: " << shoes["M"] << endl;
    nc++;
  }

  return 0;
}
