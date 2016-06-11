#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int t, n, a, black;

  while (cin >> t and t) {
    while (t--) {
      int index = 0;
      black = 0;
      n = 5;

      for (int i = 0; i < n; i++) {
        cin >> a;
        if (a <= 127) {
          black++;
          index = i;
        }
      }

      if (black == 1) {
        cout << (char)(index + 'A') << endl;
      }
      else cout << "*" << endl;
    }
  }

  return 0;
}
