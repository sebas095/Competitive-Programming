#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;
typedef long long ll;

int main() {
  fast;
  int t, n;
  vector<ll> fib(50);
  fib[0] = 0; fib[1] = 1;
  for (int i = 2; i < 49; i++) fib[i] = fib[i - 2] + fib[i - 1];

  cin >> t;
  for (int i = 0; i < t; i++) {
    if (i) cout << " ";
    cout << fib[i];
  }
  cout << endl;

  return 0;
}
