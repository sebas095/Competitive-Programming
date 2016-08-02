#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int dx[8] = {1, -1, 0, 0, 1, -1, -1, 1};
int dy[8] = {0, 0, 1, -1, -1, -1, 1, 1};

bool check(int n, int m, int x, int y) {
  return x >= 0 and x < n and y >= 0 and y < m;
}

bool force(int i, int j, int n, int m, vector<vector<int>> &board) {
  int count = 0;
  for (int k = 0; k < 8; k++) {
    int x = dx[k] + i;
    int y = dy[k] + j;
    if (check(n, m, x, y) and board[x][y] == 7) count++;
  }
  return count == 8;
}

int main() {
  fast;
  int n, m;
  cin >> n >> m;
  vector<vector<int>> board(n, vector<int>(m));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> board[i][j];
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (board[i][j] == 42 and force(i, j, n, m, board)) {
        cout << i + 1 << " " << j + 1 << endl;
        return 0;
      }
    }
  }

  cout << "0 0" << endl;
  return 0;
}
