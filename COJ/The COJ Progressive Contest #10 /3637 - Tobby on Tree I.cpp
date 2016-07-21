#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

vector<int> bfs(vector<vector<int>> &G, int s, int t) {
  queue<int> q;
  vector<bool> vi(G.size(), false);
  vector<int> p(G.size(), -1);
  vi[s] = true;
  q.push(s);

  while (!q.empty()) {
    int curr = q.front(); q.pop();

    if (curr == t) {
      int node = t;
      vector<int> ans;

      while (node != -1) {
        ans.push_back(node);
        node = p[node];
      }
      return ans;
    }

    for (int i = 0; i < G[curr].size(); i++) {
      int tmp = G[curr][i];
      if (!vi[tmp]) {
        vi[tmp] = true;
        p[tmp] = curr;
        q.push(tmp);
      }
    }
  }
}

int main() {
  fast;
  int nodes, q, type, u, v;

  while (cin >> nodes) {
    vector<int> values(nodes);
    vector<vector<int>> G(nodes);

    for (int i = 0; i < nodes; i++) cin >> values[i];
    for (int i = 0; i < nodes - 1; i++) {
      cin >> u >> v;
      G[u].push_back(v);
      G[v].push_back(u);
    }

    cin >> q;
    while (q--) {
      cin >> type >> u >> v;
      if (type == 2) values[u] = v;
      else {
        vector<int> ans = bfs(G, u, v);
        int result = __gcd(values[ans[0]], values[ans[1]]);
        for (int i = 2; i < ans.size(); i++) {
          result = __gcd(result, values[ans[i]]);
        }
        cout << result << endl;
      }
    }
  }

  return 0;
}
