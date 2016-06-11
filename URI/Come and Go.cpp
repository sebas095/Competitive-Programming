#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int cont = 0;
int dfs(int u, vector<bool> &vi, vector<vector<int> > &G) {
  vi[u] = true;
  cont++;

  for (int i = 0; i < G[u].size(); i++) {
    if (!vi[G[u][i]]) {
      dfs(G[u][i], vi, G);
    }
  }
  return cont;
}

int main() {
  fast;
  int m, n, a , b, c;

  while (cin >> m >> n and m + n) {
    vector<vector<int> > G(m);
    vector<bool> vi(m, false);

    for (int i = 0; i < n; i++) {
      cin >> a >> b >> c;
      a--;b--;
      G[a].push_back(b);
      if (c == 2) G[b].push_back(a);
    }

    int scc = 0;
    bool ok = true;
    for (int i = 0; i < m; i++) {
      vi.assign(m, false);
      cont = 0;
      scc = dfs(i, vi, G);
      if (scc == m) continue;
      else {
        ok = false;
        break;
      }
    }

    cout << ((ok)? "1" : "0") << endl;

  }

  return 0;
}
