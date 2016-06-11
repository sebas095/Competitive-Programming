#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

// https://www.hackerearth.com/problem/algorithm/supernatural-squad-2/description/

using namespace std;

typedef long long ll;
ll memo[205][205];
ll N, K;

// Forma 1
ll DP(ll n, ll k) {
  if (n < k) return 0LL;
  // Si n < 2*k quiere decir que hay un grupo donde n >= k
  if (n < (k << 1)) return 1LL;
  if (memo[n][k] != -1) return memo[n][k];

  ll ans = 1LL;
  for (ll i = k; i <= n; i++) ans += DP(n - i, i);
  return memo[n][k] = ans;
}

// Forma 2
// http://stackoverflow.com/questions/14053885/integer-partition-algorithm-and-recursion
ll DP2(ll people, ll part) {
  if (part == 0) return 1;
  if (people == 0 or part < 0 or people < K or part < K) return 0;
  if (memo[people][part] != -1) return memo[people][part];
  ll ans1 = DP2(people - 1, part);
  ll ans2 = DP2(people, part - people);
  return memo[people][part] = ans1 + ans2;
}

int main() {
  fast;
  ll t;
  cin >> t;

  while (t--) {
    memset(memo, -1, sizeof(memo));
    cin >> N >> K;
    //cout << DP(N, K) << endl;
    cout << DP2(N, N) << endl;
  }
  return 0;
}
