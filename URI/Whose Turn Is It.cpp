#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int qt, n, m;
  string name1, turn1, name2, turn2;
  cin >> qt;

  while (qt--) {
    cin >> name1 >> turn1 >> name2 >> turn2;
    cin >> n >> m;

    n += m;
    if (n & 1) {
      if (turn1 == "IMPAR") cout << name1 << endl;
      else cout << name2 << endl;
    }
    else {
      if (turn1 == "PAR") cout << name1 << endl;
      else cout << name2 << endl;
    }
  }
  return 0;
}
