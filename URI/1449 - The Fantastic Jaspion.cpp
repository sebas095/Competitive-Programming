#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

void next_int(int &a, int &b) {
  string buffer, tok;
  getline(cin, buffer);
  stringstream ss(buffer);
  ss >> a >> b;
}

int main() {
  fast;
  int t;
  cin >> t;
  cin.ignore();

  while (t--) {
    int n, m;
    string jap, port, line;
    unordered_map<string, string> translate;

    next_int(n, m);
    for (int i = 0; i < n; i++) {
      getline(cin, jap);
      getline(cin, port);
      translate[jap] = port;
    }

    for (int i = 0; i < m; i++) {
      int sp = 0;
      string tok;
      getline(cin, line);
      stringstream ss(line);

      while (ss >> tok) {
        if (sp) cout << " ";
        if (translate.count(tok)) {
          cout << translate[tok];
        }
        else cout << tok;
        sp++;
      }

      cout << endl;
    }

    cout << endl;
  }

  return 0;
}
