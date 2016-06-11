#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define MP make_pair
#define ff first
#define ss second

using namespace std;
typedef pair<int, int> PII;

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
char maps[55][55];
bool vi[55][55];
int n, m;

struct state {
  int x, y;
  state() {}
  state(int x, int y) : x(x), y(y) {}
};

void bfs(int x, int y) {
  vi[x][y] = true;
  queue<state> q;
  q.push(state(x, y));

  while (!q.empty()) {
    state curr = q.front(); q.pop();
    for (int i = 0; i < 4; i++) {
      int nx = curr.x + dx[i];
      int ny = curr.y + dy[i];
      if (nx >= 0 and nx < n and ny >= 0 and ny < m and !vi[nx][ny] and maps[nx][ny] != 'X') {
        q.push(state(nx, ny));
        vi[nx][ny] = true;
        maps[nx][ny] = 'T';
      }
    }
  }
}

int main() {
  fast;

  while (cin >> n >> m and n + m) {
    vector <PII> pos;
    memset(vi, false, sizeof(vi));

    for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++) {
        cin >> maps[i][j];
        if (maps[i][j] == 'T') pos.push_back(MP(i, j));
      }

    for (int i = 0; i < pos.size(); i++) {
      bfs(pos[i].ff, pos[i].ss);
    }

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++)
        cout << maps[i][j];
      cout << endl;
    }
    cout << endl;
  }
  return 0;
}
