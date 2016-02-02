#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

void dfs(int u, vector<vector<int> > &G, vector<bool> &vi, vector<int> &path) {
  vi[u] = true;
  path[u] = u;
  for (int i = 0; i < G[u].size(); i++) {
    if (!vi[G[u][i]]) {
      dfs(G[u][i], G, vi, path);
    }
  }
}

int main() {
  fast;
  int t, nc = 0;
  int nodes, edges;
  cin >> t;

  while (t--) {
    nc++;
    char a, b;
    int cc = 0;
    cin >> nodes >> edges;
    vector<vector<int> > G(nodes);
    vector<bool> vi(nodes, false);
    vector<vector<int> > ans(nodes, vector<int> (26, -1));

    for (int i = 0; i < edges; i++) {
      cin >> a >> b;
      G[a - 'a'].push_back(b - 'a');
      G[b - 'a'].push_back(a - 'a');
    }

    for (int i = 0; i < nodes; i++) {
      if (!vi[i]) {
        dfs(i, G, vi, ans[cc]);
        cc++;
      }
    }

    bool ok= false;
    cout << "Case #" << nc << ":" << endl;

    for (int i = 0; i < ans.size(); i++) {
      for (int j = 0; j < ans.size(); j++) {
        if(ans[i][j] != -1) {
          cout << (char)(ans[i][j] + 'a') << ",";
          ok = true;
        }
      }
      if (ok) {
        ok = false;
        cout << endl;
      }
    }
    cout << cc << " connected components" << endl << endl;

  }

  return 0;
}
