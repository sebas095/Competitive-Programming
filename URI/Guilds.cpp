#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

const int MN = 100010;
int p[MN], sz[MN];

int find_set(int x) {
  return (p[x] == x)? x : p[x] = find_set(p[x]);
}

void union_set(int x, int y) {
  int px = find_set(x);
  int py = find_set(y);
  if (px == py) return;
  p[px] = py;
  sz[py] += sz[px];
}

void init(int n, vector<int> &points) {
  for (int i = 1; i <= n; i++) {
    p[i] = i;
    sz[i] = points[i - 1];
  }
}

int main() {
  fast;
  int n, m, q, a, b;

  while (cin >> n >> m and n + m) {
    int ans = 0;
    vector<int> points(n);
    for (int i = 0; i < n; i++) cin >> points[i];

    init(n, points);
    while (m--) {
      cin >> q >> a >> b;
      if (q == 1) {
        union_set(a, b);
      }
      else {
        if (sz[find_set(a)] > sz[find_set(b)]) {
          ans += (find_set(a) == find_set(1));
        }
        else if (sz[find_set(a)] < sz[find_set(b)]) {
          ans += (find_set(b) == find_set(1));
        }

      }
    }
    cout << ans << endl;
  }

  return 0;
}
