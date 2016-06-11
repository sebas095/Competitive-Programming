#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define npos string::npos

using namespace std;

int main() {
  fast;
  int k, q;
  string s, sub;
  cin >> k;

  while (k--) {
    cin >> s >> q;
    while (q--) {
      cin >> sub;
      if (s.substr(0, sub.size()) == sub)
        cout << "y" << endl;
      else
        cout << "n" << endl;
    }
  }
  return 0;
}
