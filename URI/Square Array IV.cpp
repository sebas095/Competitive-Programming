#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;
typedef vector<vector<int> > MATRIX;

int main() {
  fast;
  int n;

  while (cin >> n) {
    MATRIX mat(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
      mat[i][i] = 2;
      mat[i][n - 1 - i] = 3;
    }

    int start = n / 3;
    int end = 2 * n / 3 - ((n % 3 == 0)? 1 : 0);
    for (int i = start; i <= end; i++) {
      for (int j = start; j <= end; j++)
        mat[i][j] = 1;
    }

    mat[n / 2][n / 2] = 4;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) cout << mat[i][j];
      cout << endl;
    }
    cout << endl;
  }

  return 0;
}
