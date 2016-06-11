#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, a, b, c, ans = 0;
  cin >> n;

  while (n--) {
    cin >> a >> b >> c;
    ans += (a & b) or (b & c) or (a & c);
  }
  cout << ans << endl;
  return 0;
}
