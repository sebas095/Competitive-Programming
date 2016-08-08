#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

string a, b;
int memo[505][505];
map<char, int> dx = {{'N', -1}, {'S', 1}, {'E', 0}, {'W', 0}};
map<char, int> dy = {{'N', 0}, {'S', 0}, {'E', 1}, {'W', -1}};

int lcs(int i, int j) {
  if (i < 0 || j < 0) return 0;
  if (memo[i][j] != -1) return memo[i][j];
  if (a[i] == b[j]) {
    return memo[i][j] = lcs(i - 1, j - 1) + 1;
  }
  return memo[i][j] = max(lcs(i - 1, j), lcs(i, j - 1));
}

int main() {
  fast;
  int t, tc = 1, h, w, n, x, y;
  string inst;
  cin >> t;

  while (t--) {
    int ans = 0;
    a = b = "";
    cin >> h >> w;
    char board[h][w];
    memset(memo, -1, sizeof memo);

    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        cin >> board[i][j];
      }
    }

    cin >> n >> x >> y;
    x--; y--;
    if (n) cin >> inst;
    a += board[x][y];

    for (int i = 0; i < n; i++) {
      x += dx[inst[i]];
      y += dy[inst[i]];
      a += board[x][y];
    }

    cin >> n >> x >> y;
    x--; y--;
    if (n) cin >> inst;
    b += board[x][y];

    for (int i = 0; i < n; i++) {
      x += dx[inst[i]];
      y += dy[inst[i]];
      b += board[x][y];
    }

    ans = lcs(a.size() - 1, b.size() - 1);
    cout << "Case " << tc++ << ": " << a.size() - ans << " " << b.size() - ans << endl;
  }

  return 0;
}
