#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

bool solve(string &s) {
  int b1 = s[s.size() - 2] - '0';
  int b2 = s[s.size() - 1] - '0';
  s = s.substr(0, s.size() - 3);

  int m1 = 1, m2 = 9, ans1 = 0, ans2 = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] != '.') {
      ans1 += (s[i] - '0') * m1;
      ans2 += (s[i] - '0') * m2;
      m1++; m2--;
    }
  }

  ans1 = (ans1 % 11 == 10)? 0 : ans1 % 11;
  ans2 = (ans2 % 11 == 10)? 0 : ans2 % 11;
  return (ans1 == b1) and (ans2 == b2);
}

int main() {
  fast;
  string s;

  while (cin >> s) {
    cout << "CPF ";
    cout << (solve(s)? "valido" : "invalido") << endl;
  }

  return 0;
}
