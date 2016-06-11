#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

typedef unsigned long long ll;
const ll mod = 2147483647;

ll power(ll base, ll expo) {
  ll ans = 1;
  while (expo) {
    if (expo & 1) {
      ans *= base;
      ans %= mod;
    }
    expo >>= 1;
    base = base * base;
    base %= mod;
  }
  return ans;
}

int main() {
  fast;
  ll r;
  cin >> r;
  cout << power(3, r) << endl;
  return 0;
}
