#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define MAX 1000001
#define MOD (int)(1e9 + 7)

using namespace std;

vector<int> H(1000008, 0), E(1000008, 0), DP(1000008, 0);

void solve() {
  DP[1] = 2;
  H[1] = E[1] = 1;

  for (int i = 2; i < MAX; i++) {
    // Todas las combinaciones de HE y EH (EHEHEHEHE, HEHEHEHEHE,...)
    H[i] = (H[i - 1] + E[i - 1]) % MOD;
    // Las posibilidades de solo H (HH, HHH, ...)
    E[i] = H[i - 1] % MOD;
    DP[i] = (DP[i - 1] + (E[i] + H[i]) % MOD) % MOD;
  }
}

int main() {
  fast;
  solve();
  int t, n;
  cin >> t;

  while (t--) {
    cin >> n;
    cout << DP[n] << endl;
  }
  return 0;
}
