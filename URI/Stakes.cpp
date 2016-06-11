#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

int main() {
  fast;
  long long a, b;

  while (cin >> a >> b) {
    long long aux = __gcd(a, b);
    cout << (((a / aux) << 1) + ((b / aux) << 1)) << endl;
  }
  return 0;
}
