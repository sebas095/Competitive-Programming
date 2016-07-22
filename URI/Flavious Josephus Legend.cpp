#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int josephus(int n, int k) {
  int ans = 0;

  for (int i = 1; i < n; i++) {
    ans = (ans + k) % (i + 1);
  }

  return ans + 1;
}

int main() {
  fast;
  int t, n, k, tc = 1;
  cin >> t;

  while (t--) {
    cin >> n >> k;
    cout << "Case " << tc++ << ": " << josephus(n, k) << endl;
  }

  return 0;
}
