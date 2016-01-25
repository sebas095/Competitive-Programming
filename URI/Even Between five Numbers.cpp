#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n = 5, x, ans = 0;

  while (n--) {
    cin >> x;
    x = abs(x);
    if (!(x & 1)) ans++;
  }

  cout << ans << " valores pares" << endl;
  return 0;
}
