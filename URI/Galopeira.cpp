#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n;
  string s;
  cin >> n;
  cout << fixed;
  cout.precision(2);

  while (n--) {
    double ans;
    cin >> s;
    ans = s.size() / 100.0;
    cout << ans << endl;
  }

  return 0;
}
