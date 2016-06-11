#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

bool solve(string &s) {
  stringstream ss(s);
  string tmp;
  set<char> ans;

  while (ss >> tmp) {
    ans.insert(tolower(tmp[0]));
  }

  return (ans.size() == 1);
}

int main() {
  fast;
  string s;

  while (getline(cin, s) and s != "*") {
    cout << ((solve(s))? 'Y' : 'N') << endl;
  }

  return 0;
}
