#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define PI acos(-1)
using namespace std;

int main() {
  fast;
  double n, ans, cons = sin(72 * PI / 180) / sin(63 * PI / 180);
  while (cin >> n) {
    ans = n * cons;
    cout << fixed << setprecision(10) << ans << endl;
  }

  return 0;
}
