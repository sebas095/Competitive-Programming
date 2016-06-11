#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int m, n;
char maps[24][24];
bool vi[24][24];
int acc = 0;
char c;

bool check(int y, int x) {
  return x >= 0 and x < n and y >= 0 and y < m and !vi[y][x];
}

void dfs(int y, int x) {
  acc++;
  vi[y][x] = true;

  for (int i = 0; i < 4; i++) {
    int nx = x + dx[i];
    int ny = y + dy[i];
    if (check(ny, nx) and maps[ny][nx] == c) {
      dfs(ny, nx);
    }
  }
  if (x == n - 1 and maps[y][0] == c and !vi[y][0])          dfs(y, 0);
  else if (x == 0 and maps[y][n - 1] == c and !vi[y][n - 1]) dfs(y, n - 1);
}

int main() {
  fast;

  while (cin >> m >> n) {
    memset(vi, false, sizeof(vi));
    int x, y, ans = acc = 0;

    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        cin >> maps[i][j];
      }
    }

    cin >> y >> x;
    c = maps[y][x];
    dfs(y, x);

    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        if (maps[i][j] == c and !vi[i][j]) {
          acc = 0;
          dfs(i, j);
          ans = max(ans, acc);
        }
      }
    }
    cout << ans << endl;
  }

  return 0;
}
