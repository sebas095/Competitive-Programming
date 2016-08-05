#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int solve(string &s) {
  string tok;
  int count = 0, sizes = 0;
  stringstream ss(s);

  while (ss >> tok) {
    bool ok = true;
    for (int i = 0; i < tok.size(); i++) {
      if (isdigit(tok[i]) or (tok[i] == '.' and i < (tok.size() - 1))) {
        ok = false;
        break;
      }
    }

    if (ok) {
      count++;
      sizes += (tok.back() == '.')? tok.size() - 1 : tok.size();
    }
  }

  return (count)? (sizes / count) : 0;
}

int main() {
  fast;
  string s;
  while (getline(cin, s)) {
    int average = solve(s);
    if (average <= 3) cout << 250 << endl;
    else if (average > 3 and average < 6) cout << 500 << endl;
    else cout << 1000 << endl;
  }
  return 0;
}
