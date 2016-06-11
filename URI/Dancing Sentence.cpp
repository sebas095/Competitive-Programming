#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  string s;
  while (getline(cin, s)) {
    bool change = false;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == ' ') {
        cout << s[i];
        continue;
      }
      if (!change) {
        s[i] = toupper(s[i]);
        cout << s[i];
        change = true;
        continue;
      }
      else {
        s[i] = tolower(s[i]);
        cout << s[i];
        change = false;
        continue;
      }
    }
    cout << endl;
  }
  return 0;
}
