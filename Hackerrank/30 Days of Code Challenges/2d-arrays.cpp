#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

vector<vector<int>> board(6, vector<int>(6));

int solve() {
  int ans = -10000;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      int aux = 0;
      aux += board[i][j];
      aux += board[i][j + 1];
      aux += board[i][j + 2];
      aux += board[i + 1][j + 1];
      aux += board[i + 2][j];
      aux += board[i + 2][j + 1];
      aux += board[i + 2][j + 2];
      ans = max(ans, aux);
    }
  }
  return ans;
}

int main() {
  fast;
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6; j++) {
      cin >> board[i][j];
    }
  }
  cout << solve() << endl;
  return 0;
}
