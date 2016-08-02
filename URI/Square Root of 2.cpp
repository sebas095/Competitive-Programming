#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

typedef long long ll;

int main() {
  fast;
  cout.precision(10);
  cout << fixed;
  int n;
  ll a = 5, b = 2;
  cin >> n;

  if (n == 0) cout << 1.0 << endl;
  else if (n == 1) cout << 1.0 + (1 / 2.0) << endl;
  else {
    n = (n > 15)? 15 : n;
    for (int i = 2; i < n; i++) {
      ll aux = a;
      a = 2 * aux + b;
      b = aux;
    }
    cout << 1.0 + ((double)b / a) << endl;
  }

  return 0;
}
