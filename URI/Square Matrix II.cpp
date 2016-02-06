#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n;

  while (cin >> n and n) {
    for (int i = 1; i <= n; i++) {
      for (int j = i; j > 1; j--) {
        cout << setw(3) << j << " ";
      }

      for (int j = 1; j <= (n + 1 - i); j++) {
        cout << setw(3) << j << ((j < (n + 1 - i))? ' ' : endl);
      }
    }
    cout << endl;
  }

  return 0;
}
