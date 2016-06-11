#include <bits/stdc++.h>
#define endl '\n'
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int p[110];
bool seen[110][110];

int find_set(int x) {
  return (p[x] == x)? x : p[x] = find_set(p[x]);
}

void union_set(int x, int y) {
  int px = find_set(x);
  int py = find_set(y);
  if (px == py) return;
  p[px] = py;
}

int init(int n) {
  for (int i = 0; i < n; i++)
    p[i] = i;
}

int main() {
  fast;
  bool flag = false;
  int n, m, k, a;
  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    cin >> k;
    for (int j = 0; j < k; j++) {
      cin >> a;
      seen[i][a - 1] = true;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (seen[i][j]) flag = true;
    }
  }

  if (!flag) cout << n << endl;
  else {
    unordered_set<int> ans;
    init(n);

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < i; j++) {
        bool join = false;
        for (int kk = 0; kk < m; kk++) if (seen[i][kk] and seen[j][kk]) {
          join = true;
          break;
        }
        if (join) union_set(i, j);
      }
    }

    for (int i = 0; i < n; i++) {
      ans.insert(find_set(i));
    }

    cout << ans.size() - 1 << endl;
  }

  return 0;
}
