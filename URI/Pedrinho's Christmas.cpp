#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int months[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 25};

int solve(int m, int d) {
  int ans = months[m - 1] - d;
  for (int i = m; i < 12; i++) ans += months[i];
  return ans;
}

int main() {
  fast;
  int m, d;

  while (cin >> m >> d) {
    if (m == 12) {
      if (d == 25) cout << "E natal!" << endl;
      else if (d == 24) cout << "E vespera de natal!" << endl;
      else if (d > 25) cout << "Ja passou!" << endl;
      else cout << "Faltam " << 25 - d << " dias para o natal!" << endl;
    }
    else {
      cout << "Faltam " << solve(m, d) << " dias para o natal!" << endl;
    }
  }

  return 0;
}
