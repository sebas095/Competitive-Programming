#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  string s;
  string alp1 = "abcdefghijklmnopqrstuvwxyz";
  string alp2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

  while (getline(cin, s)) {
    for (int i = 0; i < s.size(); i++) {
      if (s[i] >= 'a' and s[i] <= 'z') {
        cout << alp1[((s[i] - 'a') + 13) % 26];
      }
      else if (s[i] >= 'A' and s[i] <= 'Z') {
        cout << alp2[((s[i] - 'A') + 13) % 26];
      }
      else {
        cout << s[i];
      }
    }
    cout << endl;
  }
  return 0;
}
