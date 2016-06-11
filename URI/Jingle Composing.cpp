#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

const int END = 64;
const char SLASH = '/';

int solve(string &s) {
  map<char, int> val;
  val['W'] = 64;
  val['H'] = 32;
  val['Q'] = 16;
  val['E'] = 8;
  val['S'] = 4;
  val['T'] = 2;
  val['X'] = 1;

  int ans = 0, cont = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == SLASH) {
      if (cont == END) ans++;
        cont = 0;
    }
    else cont += val[s[i]];
  }

  return ans;
}

int main() {
  fast;
  string s;

  while (cin >> s and s != "*") {
    cout << solve(s) << endl;
  }

  return 0;
}
