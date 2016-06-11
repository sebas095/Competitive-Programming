#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
int n, m;

struct state {
  int x, y;
  state() {}
  state(int _x, int _y) : x(_x), y(_y) {}
};

bool validate(int x, int y) {
  return (x >= 0 and x < n and y >= 0 and y < m);
}

void bfs(int x, int y, vector<string> &board, vector<vector<bool> > &vi) {
  queue<state> q;
  vi[x][y] = true;
  q.push(state(x, y));

  while (!q.empty()) {
    state curr = q.front(); q.pop();
    for (int i = 0; i < 4; i++) {
      int nx = curr.x + dx[i];
      int ny = curr.y + dy[i];

      if (validate(nx, ny) and board[nx][ny] == '.' and !vi[nx][ny]) {
        q.push(state(nx, ny));
        vi[nx][ny] = true;
      }
    }
  }
}

int main() {
  fast;
  int ans = 0;
  cin >> n >> m;
  vector<vector<bool> > vi(n, vector<bool>(m, false));
  vector<string> board(n);

  for (int i = 0; i < n; i++) {
    cin >> board[i];
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (board[i][j] == '.' and !vi[i][j]) {
        bfs(i, j, board, vi);
        ans++;
      }
    }
  }

  cout << ans << endl;
  return 0;
}
