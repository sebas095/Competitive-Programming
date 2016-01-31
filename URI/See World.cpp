#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define pb push_back

using namespace std;

vector<int> color;

bool dfs(int u, bool c, vector<vector<int> > &G) {
  if (color[u] != -1) return c == color[u];
  color[u] = c;

  for (int i = 0; i < G[u].size(); i++) {
    if (!dfs(G[u][i], !c, G)) {
      return false;
    }
  }
  return true;
}

int main() {
  fast;
  int n, edge;
  bool ok = true;
  cin >> n;
  vector<vector<int> >G(n);
  color.assign(n, -1);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> edge;
      if (!edge) {
        G[i].pb(j);
        G[j].pb(i);
      }
    }
  }

  for (int i = 0; i < n; i++) {
    if (color[i] == -1) {
      if (!dfs(i, false, G)) {
        ok = false;
        break;
      }
    }
  }

  cout << ((ok)? "Bazinga!" : "Fail!") << endl;
  return 0;
}
