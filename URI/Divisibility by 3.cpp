#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n;
  string s;

  while (cin >> n >> s) {
    long long ans = 0;
    for (int i = 0; i < s.size(); i++) {
      ans += (s[i] -'0');
    }
    cout << ans << " " << ((ans % 3 == 0)? "sim" : "nao") << endl;
  }

  return 0;
}
