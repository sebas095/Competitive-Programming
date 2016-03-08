#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;
typedef long long ll;

int fact[] = {1, 1, 2, 6, 24, 120, 720};

int main() {
  fast;
  string s;

  while (cin >> s and s != "0") {
    ll ans = 0;
    for (int i = 0, j = s.size(); i < s.size(); i++, j--) {
      ans += (s[i] - '0') * fact[j];
    }
    cout << ans << endl;
  }

  return 0;
}
