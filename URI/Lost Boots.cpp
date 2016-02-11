#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n;

  while (cin >> n) {
    int m, ans = 0;
    char l;
    map<int, int> D, E;

    for (int i = 0; i < n; i++) {
      cin >> m >> l;
      if (l == 'D') {
        if (E[m] > 0) {
          ans++;
          E[m]--;
        }
        else D[m]++;
      }
      else if (l == 'E') {
        if (D[m] > 0) {
          ans++;
          D[m]--;
        }
        else E[m]++;
      }
    }
    cout << ans << endl;
  }

  return 0;
}
