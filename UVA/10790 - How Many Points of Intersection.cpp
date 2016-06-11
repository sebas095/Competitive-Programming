#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  unsigned long long a, b, nc = 0;
  while (cin >> a >> b and a + b) {
    cout << "Case " << ++nc << ": " << ((a * (a - 1) * b * (b - 1)) >> 2 )<< endl;
  }
  return 0;
}
