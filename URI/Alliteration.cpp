#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  string s;

  while (getline(cin, s)) {
    int ans = 0, tmp = 0;
    vector<char> let;
    string aux;
    stringstream ss(s);

    while (ss >> aux) {
      let.push_back(tolower(aux[0]));
    }

    if (let.size() > 1) {
      for (int i = 1; i < let.size(); i++) {
        if (let[i - 1] == let[i]) {
          tmp++;
        }
        else {
          if (tmp > 0) ans++;
          tmp = 0;
        }
      }
      if (tmp > 0) ans++;
      cout << ans << endl;
    }
    else cout << "0" << endl;

  }

  return 0;
}
