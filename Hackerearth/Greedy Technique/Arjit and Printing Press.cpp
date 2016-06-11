#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int t;
  string s, reserved;
  cin >> t;

  while (t--) {
    vector<int> alp(26, 0);
    cin >> s >> reserved;
    for (int i = 0; i < reserved.size(); i++) alp[reserved[i] - 'a']++;

    for (int i = 0; i < s.size(); i++) {
      for (int j = 0; j < 26; j++) {
        if (alp[j] > 0 and (char)(j + 'a') < s[i]) {
          s[i] = (char)(j + 'a');
          alp[j]--;
          break;
        }
      }
    }
    cout << s << endl;
  }

  return 0;
}
