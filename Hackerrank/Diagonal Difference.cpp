#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, d1 = 0, d2 = 0;
  cin >> n;
  int mat[n][n];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> mat[i][j];
      if (i == j) d1 += mat[i][j];
      if ((i + j) == (n - 1)) d2 += mat[i][j];
    }
  }

  cout << abs(d1 - d2) << endl;
  return 0;
}
