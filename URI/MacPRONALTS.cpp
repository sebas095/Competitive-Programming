#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  unordered_map<int, double> cost;
  cost[1001] = 1.50;
  cost[1002] = 2.50;
  cost[1003] = 3.50;
  cost[1004] = 4.50;
  cost[1005] = 5.50;

  int n, p, q;
  double ans = 0.0;
  cin >> n;

  while (n--) {
    cin >> p >> q;
    ans += cost[p] * q;
  }

  cout << fixed << setprecision(2) << ans << endl;
  return 0;
}
