#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int x;

  while (cin >> x and x) {
    int n = 5, ans = 0;

    while (n) {
      if (!(x & 1)) {
        ans += x;
        n--;
      }
      x++;
    }

    cout << ans << endl;;
  }

  return 0;
}
