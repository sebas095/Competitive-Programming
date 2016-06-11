#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, a, b;
  cin >> n;
  int mat[n][n];
  set<int> ans;

  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      cin >> mat[i][j];

  for (int i = 0; i < (n << 1); i++) {
    cin >> a >> b;
    ans.insert(mat[a - 1][b - 1]);
  }

  cout << ans.size() << endl;
  return 0;
}
