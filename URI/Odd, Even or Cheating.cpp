#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int p, j1, j2, r, a, sum;
  cin >> p >> j1 >> j2 >> r >> a;
  sum = j1 + j2;

  if (!r and !a) {
    if ((p and !(sum & 1)) or (!p and sum & 1)) {
      cout << "Jogador 1 ganha!" << endl;
    }
    else cout << "Jogador 2 ganha!" << endl;
  }
  else {
    if ((r and !a) or (!r and a)) {
      cout << "Jogador 1 ganha!" << endl;
    }
    else {
      cout << "Jogador 2 ganha!" << endl;
    }
  }

  return 0;
}
