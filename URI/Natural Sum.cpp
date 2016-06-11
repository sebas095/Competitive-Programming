#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;
typedef long long ll;

ll f(ll n) {
  return (n * (n + 1)) >> 1;
}

int main() {
  fast;
  ll a, b;
  cin >> a >> b;
  cout << f(b) - f(a - 1) << endl;
  return 0;
}
