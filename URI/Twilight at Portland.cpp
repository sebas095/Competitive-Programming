#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

char solve(vector<vector<int>> &board, int i, int j) {
  int count = 0;
  for (int n = 0; n < 2; n++) {
    for (int m = 0; m < 2; m++) {
      if (board[i + n][j + m] == 1) count++;
    }
  }
  return (count >= 2)? 'S' : 'U';
}

int main() {
  fast;
  int n;
  cin >> n;
  vector<vector<int>> board(n + 1, vector<int>(n + 1));

  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= n; j++) {
      cin >> board[i][j];
    }
  }

  for (int i = 0; i < n; i++) {
    string ans = "";
    for (int j = 0; j < n; j++) {
      ans += solve(board, i, j);
    }
    cout << ans << endl;
  }

  return 0;
}
