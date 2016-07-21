#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

void solve(string &s) {
  replace(s.begin(), s.end(), '2', '*');
  replace(s.begin(), s.end(), '5', '2');
  replace(s.begin(), s.end(), '6', '#');
  replace(s.begin(), s.end(), '9', '6');
  replace(s.begin(), s.end(), '*', '5');
  replace(s.begin(), s.end(), '#', '9');
  cout << s << endl;
}

int main() {
  fast;
  string s;

  while (cin >> s) {
    int value = 1;
    string ans = "";
    map<char, int> id;
    set<char> seen;

    for (int i = 0; i < s.size(); i++) {
      if (!seen.count(s[i])) {
        seen.insert(s[i]);
        id[s[i]] = value;
        value++;
      }
      ans += to_string(id[s[i]]);
    }

    solve(ans);
  }

  return 0;
}
