#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, m, a, b;

  while (cin >> n >> m and n + m) {
    vector<vector<char>> img(n, vector<char>(m));
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> img[i][j];
      }
    }

    cin >> a >> b;
    for (int i = 0; i < n; i++) {
      for (int ii = 0; ii < a / n; ii++) {
        for (int j = 0; j < m; j++) {
          for (int k = 0; k < b / m; k++) {
            cout << img[i][j];
          }
        }
        cout << endl;
      }
    }
    cout << endl;
  }

  return 0;
}
