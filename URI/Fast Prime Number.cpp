#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;
typedef long long ll;

bool isPrime(ll n) {
  bool ok = true;
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      ok = false;
      break;
    }
  }
  return ok;
}

int main() {
  fast;
  int t; ll n;
  cin >> t;

  while (t--) {
    cin >> n;
    cout << ((isPrime(n))? "Prime" : "Not Prime") << endl;
  }

  return 0;
}
