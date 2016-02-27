#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

string solve(char d, string s) {
  string ans = "";
  int index = 0;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] != d) ans += s[i];
  }

  if (ans.size()) {
    for (int i = 0; i < ans.size(); i++) {
      if (ans[i] != '0') {
        index = i;
        break;
      }
      else if (i == ans.size() - 1)
        index = -1;
    }
    ans = (index != -1)? ans.substr(index) : "";
    return (ans.size())? ans : "0";
  }

  else return "0";
}

int main() {
  fast;
  char d;
  string n;

  while (cin >> d >> n and d != '0' and n != "0") {
    cout << solve(d, n) << endl;
  }

  return 0;
}
