#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define MOD (long long)(1e9 + 7)

using namespace std;

typedef long long ll;
ll memo[1000005];
vector<ll> memo2(1000005, 0);

// Recursivo Runtime error en el ultimo caso para n > 1e5
ll DP(ll n) {
  if (n == 0 or n == 1) return 1LL;
  if (memo[n] != -1) return memo[n];

  ll a = DP(n -1) % MOD;
  ll b = (((n - 1) % MOD) * (DP(n - 2) % MOD)) % MOD;
  ll ans = (a + b) % MOD;
  return memo[n] = ans;
}

// Iterativo Accepted
void DP2() {
  memo2[0] = memo2[1] = 1LL;
  for (int i = 2; i < memo2.size(); i++)
    memo2[i] = (memo2[i - 1] + ((i - 1LL) * memo2[i - 2])) % MOD;
}

int main() {
  fast;
  ll t, n;
  // memset(memo, -1, sizeof(memo));
  DP2();
  cin >> t;

  while (t--) {
    cin >> n;
    // cout << DP(n) << endl;
    cout << memo2[n] << endl;
  }
  return 0;
}
