#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  bool ok = true;
  int n, m, x, tmp;
  cin >> n >> m;

  vector<bool> bulbs(m, false);
  while (n--) {
    cin >> x;
    while (x--) {
      cin >> tmp;
      bulbs[tmp - 1] = true;
    }
  }

  for (int i = 0; i < bulbs.size(); i++) {
    if (!bulbs[i]) {
      ok = false;
      break;
    }
  }

  cout << ((ok)? "YES" : "NO") << endl;
  return 0;
}
