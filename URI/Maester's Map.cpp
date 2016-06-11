#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

struct state {
  int x, y;
  state() {}
  state(int x, int y) : x(x), y(y) {}
};

bool solve(vector<vector<char> > &board) {
  int n = board.size();
  int m = board[0].size();

  vector<vector<bool> > vi(n, vector<bool>(m, false));
  queue<state> q;
  vi[0][0] = true;
  int mx = 0, my = 0;
  q.push(state(0, 0));

  while (!q.empty()) {
    state curr = q.front();
    q.pop();

    if (board[curr.x][curr.y] == '*') {
      return true;
    }

    if (board[curr.x][curr.y] == '>') {
      my = 1;
      mx = 0;
    }
    else if (board[curr.x][curr.y] == '<') {
      my = -1;
      mx = 0;
    }
    else if (board[curr.x][curr.y] == '^') {
      my = 0;
      mx = -1;
    }
    else if (board[curr.x][curr.y] == 'v') {
      my = 0;
      mx = 1;
    }

    state tmp(curr.x + mx, curr.y + my);
    if (tmp.x >= 0 and tmp.x < n and tmp.y >= 0 and tmp.y < m and !vi[tmp.x][tmp.y]) {
      vi[tmp.x][tmp.y] = true;
      q.push(tmp);
    }
  }
  return false;
}

int main() {
  fast;
  int m, n;
  cin >> m >> n;
  vector<vector<char> > board(n, vector<char>(m));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++)
      cin >> board[i][j];
  }

  cout << (solve(board)? '*' : '!') << endl;

  return 0;
}
