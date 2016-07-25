#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int teams, matches, points;
  string name;

  while (cin >> teams >> matches and teams + matches) {
    int total = 0;

    while (teams--) {
      cin >> name >> points;
      total += points;
    }

    if (total == matches * 3) cout << 0 << endl;
    else cout << (matches * 3) - total << endl;
  }

  return 0;
}
