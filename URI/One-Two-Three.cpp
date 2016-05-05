#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int solve(string &s) {
  if (s.size() == 5) return 3;
  else {
    if ((s[0] == 'o' and s[1] == 'n') or (s[1] == 'n' and s[2] == 'e') or (s[0] == 'o' and s[2] == 'e')) {
      return 1;
    }
    else return 2;
  }
}

int main() {
  fast;
  int t;
  string s;
  cin >> t;

  while (t--) {
    cin >> s;
    cout << solve(s) << endl;
  }

  return 0;
}
