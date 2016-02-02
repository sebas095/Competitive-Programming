#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;
typedef long long ll;

int main() {
  fast;
  int t;
  string s1, s2;
  cin >> t;

  while (t--) {
    ll ans = 0;
    cin >> s1 >> s2;
    for (int i = 0; i < s1.size(); i++) {
      if (s1[i] < s2[i]) {
        ans += s2[i] - s1[i];
      }
      else if (s1[i] > s2[i]) {
        ans += 26 - abs(s1[i] - s2[i]);
      }
    }
    cout << ans << endl;
  }

  return 0;
}
