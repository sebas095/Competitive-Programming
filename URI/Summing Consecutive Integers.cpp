#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int a, n, ans = 0;
  cin >> a;

  while (cin >> n and n <= 0) {}
  while (n--) {
    ans += a;
    a++;
  }

  cout << ans << endl;
  return 0;
}
