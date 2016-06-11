#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  bool mark[505][505];
  memset(mark, false, sizeof(mark));
  int x, y, x0, y0, valid = 1;
  string s, ans = "";
  cin >> x >> y >> x0 >> y0 >> s;
  x0--;y0--;
  mark[x0][y0] = true;
  ans += "1 ";

  for (int i = 0; i < s.size()-1; i++) {
    if (s[i] == 'U' and x0 > 0) x0--;
    if (s[i] == 'D' and x0 < x - 1) x0++;
    if (s[i] == 'L' and y0 > 0) y0--;
    if (s[i] == 'R' and y0 < y - 1) y0++;

    if (!mark[x0][y0]) {
      mark[x0][y0] = true;
      valid++;
      ans += "1 ";
    }
    else
      ans += "0 ";
  }
  cout << ans << x * y - valid << endl;
  return 0;
}
