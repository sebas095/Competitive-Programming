#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int t, q;
  string s, r;
  cin>> t;

  while (t--) {
    cin >> s >> q;
    
    while (q--) {
      cin >> r;
      bool ok = true;
      int index = 0;

      for (int i = 0; i < r.size(); i++) {
        index = s.find_first_of(r[i], index);
        if (index == -1) {
          ok = false;
          break;
        }
        index++;
      }
      cout << ((ok)? "Yes" : "No") << endl;
    }
  }

  return 0;
}
