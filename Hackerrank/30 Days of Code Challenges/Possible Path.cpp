#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int t;
  long long a, b, x, y;
  cin >> t;

  while (t--) {
    cin >> a >> b >> x >> y;
    if (__gcd(a, b) == __gcd(x, y)) {
      cout << "YES";
    }
    else cout << "NO";
    cout << endl;
  }

  return 0;
}
