#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

typedef long long ll;

int main() {
  fast;
  int n = 6, ans = 0;
  double x;

  while (n--) {
    cin >> x;
    if (x > 0.0) ans++;
  }

  cout << ans << " valores positivos" << endl;
  return 0;
}
