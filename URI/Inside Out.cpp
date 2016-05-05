#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int next_int() {
  string buffer;
  getline(cin, buffer);
  return atoi(buffer.c_str());
}

string solve(string &s) {
  string s1 = s.substr(0, s.size() / 2);
  string s2 = s.substr(s.size() / 2);
  reverse(s1.begin(), s1.end());
  reverse(s2.begin(), s2.end());
  return s1 + s2;
}

int main() {
  fast;
  int n;
  string s;
  n = next_int();

  while (n--) {
    getline(cin, s);
    cout << solve(s) << endl;
  }

  return 0;
}
