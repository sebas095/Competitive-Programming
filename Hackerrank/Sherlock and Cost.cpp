#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int t, n;
  cin >> t;

  while (t--) {
    int low = 0, high = 0, prev_mini = 0, prev_maxi = 0;
    cin >> n;
    vector<int> b(n);
    for (int i = 0; i < n; i++) cin >> b[i];

    for (int i = 1; i < n; i++) {
      prev_mini = max(abs(b[i - 1] - 1) + high, low);
      prev_maxi = max(abs(b[i] - 1) + low, abs(b[i] - b[i - 1]) + high);
      low = prev_mini;
      high = prev_maxi;
    }

    cout << max(low, high) << endl;
  }

  return 0;
}
