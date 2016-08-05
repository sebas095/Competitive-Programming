#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

struct Edge {
  int u, v, w;
  Edge() {}
  Edge(int u, int v, int w) : u(u), v(v), w(w) {}
  bool operator <(const Edge &e) const {
    return w < e.w;
  }
};

int p[50000];

int find_set(int x) {
  return (p[x] == x)? x : find_set(p[x]);
}

void union_set(int x, int y) {
  int px = find_set(x);
  int py = find_set(y);
  if (px == py) return;
  p[px] = py;
}

void init(int n) {
  for (int i = 0; i < n; i++) p[i] = i;
}

int kruskal(vector<Edge> &G) {
  int ans = 0;
  sort(G.begin(), G.end());

  for (int i = 0; i < G.size(); i++) {
    int u = G[i].u;
    int v = G[i].v;
    int w = G[i].w;

    if (find_set(u) != find_set(v)) {
      union_set(u, v);
      ans += w;
    }
  }

  return ans;
}

int main() {
  fast;
  int n, m, u, v, w;

  while (cin >> n >> m and n + m) {
    vector<Edge> G(m);
    init(n);
    for (int i = 0; i < m; i++) {
      cin >> u >> v >> w;
      G[i] = Edge(u, v, w);
    }
    cout << kruskal(G) << endl;
  }

  return 0;
}
