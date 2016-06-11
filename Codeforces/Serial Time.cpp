#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

char G[11][11][11];
bool visited[11][11][11];
int k, n, m;

int dx[] = {0, 0, -1, 1, 0, 0};
int dy[] = {0, 0, 0, 0, -1, 1};
int dz[] = {-1, 1, 0, 0, 0, 0};

struct state {
  int x, y, z;
  state() {}
  state(int _x, int _y, int _z) : x(_x), y(_y), z(_z) {}
};

int bfs(int x, int y, int z) {
  queue <state> q;
  int ans = 1;
  q.push(state(x, y, z));
  visited[z][x][y] = true;

  while (!q.empty()) {
    state current = q.front();
    q.pop();

    for (int i = 0; i < 6; i++) {
      int x = current.x + dx[i];
      int y = current.y + dy[i];
      int z = current.z + dz[i];
      if (x >= 0 and x < n and y >= 0 and y < m and z >= 0 and z < k) {
        if (G[z][x][y] != '#' and !visited[z][x][y]) {
          ans++;
          visited[z][x][y] = true;
          q.push(state(x, y, z));
        }
      }
    }
  }

  return ans;
}

int main() {
  fast;
  int x, y;
  memset(visited, false, sizeof(visited));
  cin >> k >> n >> m;

  for (int i = 0; i < k; i++)
    for (int j = 0; j < n; j++)
      for (int l = 0; l < m; l++)
        cin >> G[i][j][l];

  cin >> x >> y;
  cout << ((G[0][x - 1][y -1] == '.')? bfs(x - 1, y - 1, 0) : 0) << endl;
  return 0;
}
