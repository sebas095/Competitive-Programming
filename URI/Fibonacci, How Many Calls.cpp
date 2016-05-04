#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

typedef long long int ll;
vector<ll> fib(41, 0);
vector<ll> calls(41, 1);

void dp() {
  fib[0] = 0;
  fib[1] = 1;

  for (int i = 2; i < 41; i++) {
    fib[i] = fib[i - 1] + fib[i - 2];
    calls[i] += calls[i - 1] + calls[i - 2];
  }
}

int main() {
  fast;
  int t, n;
  cin >> t;
  dp();

  while (t--) {
    cin >> n;
    cout << "fib(" << n << ") = " << calls[n] - 1 << " calls = " << fib[n] << endl;
  }

  return 0;
}
