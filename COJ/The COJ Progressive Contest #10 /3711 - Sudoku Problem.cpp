#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

bool check(int n, vector<vector<int> > &board, int r, int c, int v) {
  for (int i = 0; i < n * n; i++)
    if ((board[r][i] == v and i != c) or (board[i][c] == v and i != r)) return false;

  int init_i = (r / n) * n;
  int init_j = (c / n) * n;

  for (int i = 0; i < n; ++i)
    for (int j = 0; j < n; ++j)
      if (board[init_i + i][init_j + j] == v and (init_j + i) != r and (init_j + j) != c) return false;

  return true;
}

int main() {
  fast;
  int t;
  cin >> t;

  while (t--) {
    int n;
    bool ok = true, flag = false;
    cin >> n;
    vector<vector<int> > board(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        cin >> board[i][j];
      }
    }

    for (int i = 0; i < n; i++) {
      if (flag) break;
      for (int j = 0; j < n; j++) {
        if (!check(floor(sqrt(n * 1.0)), board, i, j, board[i][j])) {
          ok = false;
          flag = true;
          break;
        }
      }
    }
    cout << ((ok)? "yes" : "no") << endl;
  }

  return 0;
}
