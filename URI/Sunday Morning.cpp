#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  string s;

  while (cin >> s) {
    int ans = 0;
    if (s[0] == '7') {
      int minutes = atoi(s.substr(2).c_str());
      ans = 60 - (60 - minutes);
    }
    else if (s[0] == '8') {
      int minutes = atoi(s.substr(2).c_str());
      ans = 60 + minutes;
    }
    else if (s[0] == '9') {
      int minutes = atoi(s.substr(2).c_str());
      ans = 120;
    }
    cout << "Atraso maximo: " << ans << endl;
  }

  return 0;
}
