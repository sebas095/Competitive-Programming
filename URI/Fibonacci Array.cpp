#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;
typedef long long ll;

int main() {
  fast;
  int t, n;
  vector<ll> fib(61);
  fib[0] = 0; fib[1] = 1;
  for (int i = 2; i < 61; i++) fib[i] = fib[i - 2] + fib[i - 1];

  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> n;
    cout << "Fib(" << n << ") = " << fib[n] << endl;
  }
  return 0;
}
