#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int toInt(string s) {
  return atoi(s.c_str());
}

bool isNumber(string &s) {
  return isdigit(s[0]);
}

int main() {
  fast;
  string s, var = "", n1 = "", eq = "", n2 = "", op = "", last = "";
  map<string, int> ans;

  while (getline(cin, s)) {
    stringstream ss(s);
    var = n1 = eq = n2 = op = last = "";
    ss >> var >> eq >> n1 >> op >> n2;
    last = var;

    if (isNumber(n1)) {
      if (op == "+" and n2 != "") {
        if (isNumber(n2)) ans[var] = toInt(n1) + toInt(n2);
        else ans[var] = toInt(n1) + ans[n2];
      }
      else ans[var] = toInt(n1);
    }

    else ans[var] = ans[n1] + ans[n2];
  }

  cout << ans[last] << endl;
  return 0;
}
