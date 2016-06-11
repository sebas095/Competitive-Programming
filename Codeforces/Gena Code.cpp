#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

bool check(string &s) {
  bool ok = false;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '1') {
      if (ok) return false;
      ok = true;
    }
    else if (s[i] != '0') return false;
  }
  return true;
}

int main() {
  fast;
  bool flag = false;
  int n, count_zero = 0;
  string ai, invalid = "1", ans = "";
  cin >> n;

  while (n--) {
    cin >> ai;
    if (ai == "0") {
      ans = "0";
      flag = true;
      break;
    }
    if (check(ai)) count_zero += ai.size() - 1;
    else invalid = ai;
  }

  ans = (flag)? ans : invalid + string(count_zero, '0');
  cout << ans << endl;
  return 0;
}
