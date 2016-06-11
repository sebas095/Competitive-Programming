#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  string alp = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int t, key;
  string s;
  cin >> t;

  while (t--) {
    cin >> s >> key;
    for (int i = 0; i < s.size(); i++) {
      cout << alp[((s[i]-'A') - key + 26) % 26];
    }
    cout << endl;
  }

  return 0;
}
