#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n;

  while (cin >> n) {
    double ans = (-1 + sqrt(4 * n + 1)) / 2.0;
    int ans2 = (1 + sqrt(4 * n + 1)) / 2;
    cout << fixed << setprecision(2) << ans << " " << (int)ans2 << endl;
  }

  return 0;
}
