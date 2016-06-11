#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int t, n, k, ai;
  cin >> t;

  while (t--) {
    int ans = 0;
    cin >> n >> k;
    while (n--) {
      cin >> ai;
      ans += (ai <= 0);
    }
    cout << ((ans >= k)? "NO" : "YES") << endl;
  }

  return 0;
}
