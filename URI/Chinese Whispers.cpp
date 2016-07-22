#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int t, tc = 1;
  cin >> t;
  cin.ignore();

  while (t--) {
    int count1 = 0, count2 = 0, draw = 2;
    bool ok = true;
    string original, team1, team2;

    getline(cin, original);
    getline(cin, team1);
    getline(cin, team2);

    for (int i = 0; i < original.size(); i++) {
      if (original[i] == team1[i]) count1++;
      else if (ok and original[i] == team2[i]) {
        draw = 1;
        ok = false;
      }
      if (original[i] == team2[i]) count2++;
      else if (ok and original[i] == team1[i]) {
        draw = 0;
        ok = false;
      }
    }

    cout << "Instancia " << tc++ << endl;
    if (count1 == count2) {
      if (draw == 1)      cout << "time 2" << endl;
      else if (draw == 0) cout << "time 1" << endl;
      else                cout << "empate" << endl;
    }
    else cout << "time " << ((count1 > count2)? "1" : "2") << endl;
    cout << endl;
  }

  return 0;
}
