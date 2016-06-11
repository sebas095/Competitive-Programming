#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

void solve(vector<string> &lines) {
  for (int i = 0; i < lines.size(); i++) {
    bool ok1 = false, ok2 = false;
    for (int j = 0; j < lines[i].size(); j++) {
      if (lines[i][j] == '_' or lines[i][j] == '*') {
        if (lines[i][j] == '_') {
          if (ok1) {
            cout << "</i>";
            ok1 = false;
          }
          else {
            cout << "<i>";
            ok1 = true;
          }
        }
        else if (lines[i][j] == '*') {
          if (ok2) {
            cout << "</b>";
            ok2 = false;
          }
          else {
            cout << "<b>";
            ok2 = true;
          }
        }

      }
      else {
        cout << lines[i][j];
      }
    }
    cout << endl;
  }
}

int main() {
  fast;
  vector<string> lines;
  string s;

  while (getline(cin, s)) {
    lines.push_back(s);
  }

  solve(lines);
  return 0;
}
