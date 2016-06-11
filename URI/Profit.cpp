#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int days, cost;

  while (cin >> days) {
    int ans = 0;
    cin >> cost;
    vector<int> price(days);
    for (int i = 0; i < days; i++) cin >> price[i];

    for (int i = 0; i < days; i++) {
      for (int j = 0; j < days; j++) {
        int tmp = 0, ctn = 0;
        for (int k = i; k <= j; k++) {
          tmp += price[k];
          ctn++;
        }
        ans = max(ans, tmp - (ctn * cost));
      }
    }
    cout << ans << endl;
  }
  return 0;
}
