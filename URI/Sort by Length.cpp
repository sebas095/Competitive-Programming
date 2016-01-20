#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int nextInt() {
  string buffer;
  getline(cin, buffer);
  return atoi(buffer.c_str());
}

int main() {
  fast;
  int t, index = 0;
  string s, solve;
  t = nextInt();

  while (t--) {
    solve = "";
    getline(cin, s);
    stringstream ss(s);
    vector <vector<string> > ans(55);

    while(ss >> s) {
      ans[s.size()].push_back(s);
      index = max(index, (int)s.size());
    }

    for (int i = index; i >= 0; i--) {
      for (int j = 0; j < ans[i].size(); j++) {
        if (j or (i < index)) solve += " ";
        solve += ans[i][j];
      }
    }

    solve = (solve[0] == ' ')? solve.substr(1) : solve;
    cout << solve << endl;
  }
  return 0;
}
