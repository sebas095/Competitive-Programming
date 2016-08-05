#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

typedef long long ll;

struct Edge {
  int u, v;
  ll w;
  Edge() {}
  Edge(int u, int v, ll w) : u(u), v(v), w(w) {}
  bool operator <(const Edge &e) const {
    return w < e.w;
  }
};

int p[200000];

int find_set(int x) {
  return (p[x] == x)? x : find_set(p[x]);
}

void union_set(int x, int y) {
  int px = find_set(x);
  int py = find_set(y);
  if (px == py) return;
  p[px] = py;
}

int init(int n) {
  for (int i = 0; i < n; i++) p[i] = i;
}

ll kruskal(vector<Edge> &G) {
  ll ans = 0;
  sort(G.begin(), G.end());

  for (int i = 0; i < G.size(); i++) {
    int u = G[i].u;
    int v = G[i].v;
    ll w = G[i].w;

    if (find_set(u) != find_set(v)) {
      union_set(u, v);
      continue;
    }

    ans += w;
  }

  return ans;
}

int main() {
  fast;
  int m, n, u, v;
  ll w;

  while (cin >> m >> n and m + n) {
    vector<Edge> G(n);
    init(m);
    for (int i = 0; i < n; i++) {
      cin >> u >> v >> w;
      G[i] = Edge(u, v, w);
    }
    cout << kruskal(G) << endl;
  }

  return 0;
}
