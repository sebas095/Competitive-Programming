#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

typedef long long ll;

const ll MOD = 1000000009;
vector<ll> ans(100009, 1);

void sieve() {
  ans[4] = 4;
  ans[5] = 20;

  for (int i = 6; i < ans.size(); i++) {
    ans[i] = ((ans[i - 1] % MOD) * (i % MOD)) % MOD;
  }
}

int main() {
  fast;
  sieve();
  int n;

  while (cin >> n and n) {
    cout << ans[n] << endl;
  }

  return 0;
}
