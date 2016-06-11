#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  bool ok = true;
  int p, n;
  cin >> p >> n;

  vector<int> jumps(n);
  for (int i = 0; i < n; i++) cin >> jumps[i];

  for (int i = 1; i < n; i++) {
    if (abs(jumps[i - 1] - jumps[i]) <= p) ok = true;
    else {
      ok = false;
      break;
    }
  }

  cout << ((ok)? "YOU WIN" : "GAME OVER") << endl;

  return 0;
}
