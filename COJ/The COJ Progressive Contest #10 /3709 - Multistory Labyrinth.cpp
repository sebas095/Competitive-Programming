#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

char board[100][100][100];
bool vi[100][100][100];

int dx[3] = {1, 0, -1};
int dy[5] = {0, -1, 0, 1, 0};
int dz[5] = {0, 0, -1, 0, 1};
int n, m, f;

struct state {
  int x, y, z, dist;
  state() {}
  state(int x, int y, int z, int dist) : x(x), y(y), z(z), dist(dist) {}
  void print() {
    cout << x << " " << y << " " << z << endl;
  }
};

bool check(int x, int y, int z) {
  return (x >= 0 and x < f) and (y >= 0 and y < n) and (z >= 0 and z < m);
}

int bfs(state source, state target) {
  memset(vi, false, sizeof(vi));
  queue<state> q;
  q.push(source);
  vi[source.x][source.y][source.z] = true;

  while (!q.empty()) {
    state curr = q.front(); q.pop();

    if (curr.x == target.x and curr.y == target.y and curr.z == target.z)
      return curr.dist;

    if (board[curr.x][curr.y][curr.z] == '-') {
      for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
          int nx = curr.x + dx[j];
          int ny = curr.y + dy[i];
          int nz = curr.z + dz[i];

          if (check(nx, ny, nz) and !vi[nx][ny][nz] and board[nx][ny][nz] != '#') {
            if (nx == curr.x or (board[nx][ny][nz] == '-' and ny == curr.y and nz == curr.z)) {
              vi[nx][ny][nz] = true;
              q.push(state(nx, ny, nz, curr.dist + 1));
            }
          }
        }
      }
    }
    else {
      for (int i = 1; i < 5; i++) {
        int ny = curr.y + dy[i];
        int nz = curr.z + dz[i];

        if (check(curr.x, ny, nz) and !vi[curr.x][ny][nz] and board[curr.x][ny][nz] != '#') {
          vi[curr.x][ny][nz] = true;
          q.push(state(curr.x, ny, nz, curr.dist + 1));
        }
      }
    }
  }
  return -1;
}

int main() {
  fast;
  while (cin >> n >> m >> f and n + m + f) {
    state source, target;

    for (int k = 0; k < f; k++) {
      for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
          cin >> board[k][i][j];
          if (board[k][i][j] == 'S') {
            source.x = k;
            source.y = i;
            source.z = j;
          }
          else if (board[k][i][j] == 'E') {
            target.x = k;
            target.y = i;
            target.z = j;
          }
        }
      }
    }

    cout << bfs(source, target) << endl;
  }
  return 0;
}
