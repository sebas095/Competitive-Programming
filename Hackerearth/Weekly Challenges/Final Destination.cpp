#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int x = 0, y = 0;
  string s;
  cin >> s;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'L')      x--;
    else if (s[i] == 'R') x++;
    else if (s[i] == 'U') y++;
    else if (s[i] == 'D') y--;
  }

  cout << x << " " << y << endl;
  return 0;
}
