#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

struct Edge {
  int from, to, type;
  Edge() {}
  Edge(int f, int t, long long w) : from(f), to(t), type(w) {}
  bool operator < (const Edge &e) const {
    return type > e.type;
  }
};

int p[1010];

int find_set(int x) {
  return (p[x] == x)? x : p[x] = find_set(p[x]);
}

void union_set(int x, int y) {
  int px = find_set(x);
  int py = find_set(y);
  if (px == py) return;
  p[px] = py;
}

void init(int n) {
  for (int i = 0; i <= n; i++)
    p[i] = i;
}

int kruskal(vector <Edge> &G, int n) {
  int ans = 0, u, v, t, mw = 0;
  init(n);
  sort(G.begin(), G.end());

  for (int i = 0; i < G.size(); i++) {
    u = G[i].from;
    v = G[i].to;
    t = G[i].type;
    if (find_set(u) != find_set(v)) {
      union_set(u, v);
      ans++;
      if (t == 3) mw++;
    }
  }

  return (ans != n - 1)? -1 : mw;
}

int main() {
  fast;
  int n, m, a, b, c, ans1, ans2;
  vector <Edge> men, women;
  cin >> n >> m;

  for (int i = 0; i < m; i++) {
    cin >> a >> b >> c;
    if (c == 1) men.push_back(Edge(a, b, c));
    else if (c == 2) women.push_back(Edge(a, b, c));
    else {
      men.push_back(Edge(a, b, c));
      women.push_back(Edge(a, b, c));
    }
  }

  // ans1 o ans2 (son iguales) son los nodos que comparten ambos arboles
  ans1 = kruskal(men, n);
  if (ans1 != -1) {
    ans2 = kruskal(women, n);
    if (ans2 != -1) {
      // Total de aristas que necesita cada arbol para que este bien construido (sea spanning tree)
      int ans = n - 1 - ans2;
      // Imprimimos los nodos que podemos extraer sin alterar la cantidad de nodos que necesita cada arbol
      cout << m - ans2 - 2 * ans << endl;
    }
    else cout << ans2 << endl;
  }
  else cout << ans1 << endl;

  return 0;
}
