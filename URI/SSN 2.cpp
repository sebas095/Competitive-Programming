#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

string solve(string &s) {
  string ans = "";
  int m1 = 1, m2 = 9, ans1 = 0, ans2 = 0;

  for (int i = 0; i < s.size(); i++) {
    ans += s[i];
    if ((i + 1) % 3 == 0 and i < s.size() - 1) {
      ans += '.';
    }

    ans1 += (s[i] - '0') * m1;
    ans2 += (s[i] - '0') * m2;
    m1++; m2--;
  }

  ans += '-';
  ans1 = (ans1 % 11 == 10)? 0 : ans1 % 11;
  ans2 = (ans2 % 11 == 10)? 0 : ans2 % 11;
  ans += (ans1 + '0');
  ans += (ans2 + '0');

  return ans;
}

int main() {
  fast;
  string s;

  while (cin >> s) {
    cout << solve(s) << endl;
  }

  return 0;
}
