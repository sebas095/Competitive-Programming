#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

struct state {
  int x, y;
  state() {}
  state(int x, int y) : x(x), y(y) {}
};

int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};
int n, m;
vector<string> table;
vector<vector <int> > colors;
map<int, int> frec;

bool possible(int x, int y) {
  return (x >= 0 and x < n and y >= 0 and y < m and table[x][y] != '*');
}

void bfs(int x, int y, int color) {
  if (!colors[x][y]) {
    queue<state> q;
    q.push(state(x, y));
    colors[x][y] = color;
    frec[color]++;

    while (!q.empty()) {
      state curr = q.front(); q.pop();

      for (int i = 0; i < 4; i++) {
        int x = dx[i] + curr.x;
        int y = dy[i] + curr.y;
        if (possible(x, y) and !colors[x][y]) {
          colors[x][y] = color;
          frec[color]++;
          q.push(state(x, y));
        }
      }
    }
  }
}

void solve() {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (table[i][j] == '*') {
        set<int> vi;
        int ans = 1;

        for (int k = 0; k < 4; k++) {
          int x = dx[k] + i;
          int y = dy[k] + j;
          if (possible(x, y) and !vi.count(colors[x][y])) {
            ans += frec[colors[x][y]];
            vi.insert(colors[x][y]);
          }
        }
        cout << ans % 10;
      }
      else cout << table[i][j];
    }
    cout << endl;
  }
}

int main() {
  fast;
  int color = 1;
  cin >> n >> m;
  table.resize(n);
  colors.assign(n, vector<int>(m, 0));

  for (int i = 0; i < n; i++) cin >> table[i];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++)
      if (table[i][j] == '.') {
        bfs(i, j, color);
        color++;
      }
  }

  solve();
  return 0;
}
