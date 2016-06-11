#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

void dfs(int u, vector< vector<int> > &G, vector<bool> &vi) {
  vi[u] = true;
  for (int i = 0; i < G[u].size(); i++) {
    int tmp = G[u][i];
    if (!vi[tmp]) dfs(tmp, G, vi);
  }
}

int main() {
  fast;
  int t, nodes, edges, a, b, cc = 0;
  cin >> t;

  for (int nc = 1; nc <= t; nc++) {
    cc = 0;
    cin >> nodes >> edges;
    vector< vector<int> > G(nodes);
    vector<bool> vi(nodes, false);

    for (int i = 0; i < edges; i++) {
      cin >> a >> b;
      a--;b--;
      G[a].push_back(b);
      G[b].push_back(a);
    }

    for (int i = 0; i < nodes; i++) {
      if (!vi[i]) {
        cc++;
        dfs(i, G, vi);
      }
    }

    cout << "Caso #" << nc << ": ";
    if (cc == 1) cout << "a promessa foi cumprida" << endl;
    else cout << "ainda falta(m) " << cc - 1 << " estrada(s)" << endl;
  }
  return 0;
}
