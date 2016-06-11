#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

// https://www.urionlinejudge.com.br/judge/en/problems/view/1276

using namespace std;

string join(string &s) {
  stringstream ss(s);
  string tmp = "", ans = "";
  set<char> words;

  while (ss >> tmp) {
    for (int i = 0; i < tmp.size(); i++) {
      words.insert(tmp[i]);
    }
  }

  for (auto &it : words) {
    ans += it;
  }

  return ans;
}

vector<string> solve(string &s) {
  string ans = "", ss = join(s), tmp = "";
  vector<string> range;

  if (ss.size() > 0) {
    for (int i = 0; i < ss.size() - 1; i++) {
      if (ss[i] == (ss[i + 1] - 1)) {
        ans += ss[i];
      }
      else {
        ans += ss[i];
        ans += ' ';
      }
    }

    ans += ss[ss.size() - 1];
    stringstream st(ans);

    while (st >> tmp) {
      string aux = "";
      aux += tmp[0];
      aux += ':';
      aux += tmp[tmp.size() - 1];
      range.push_back(aux);
    }
  }

  return range;
}

int main() {
  fast;
  string s;

  while (getline(cin, s)) {
    vector<string> ans(solve(s));

    for (int i = 0; i < ans.size(); i++) {
      if (i) cout << ", ";
      cout << ans[i];
    }

    cout << endl;
  }

  return 0;
}
