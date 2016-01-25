#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n;

  while (cin >> n) {
    vector< vector<int> > vec(n, vector<int>(n, 3));

    for (int i = 0; i < n; i++) {
      vec[i][i] = 1;
      vec[i][n - i - 1] = 2;
    }

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        cout << vec[i][j];
      }
      cout << endl;
    }
  }

  return 0;
}
