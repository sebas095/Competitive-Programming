#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define MOD (long long)(1e9 + 7)
#define MAX 31320

// https://www.hackerearth.com/code-monk-minimum-spanning-tree/algorithm/quantitative-coefficient/

using namespace std;

struct Edge {
  int from, to;
  long long weight;
  Edge() {}
  Edge(int f, int t, long long w) : from(f), to(t), weight(w) {}
  bool operator < (const Edge &e) const {
    return weight < e.weight;
  }
};

int p[MAX], nodes, edges;
vector <Edge> G(MAX);

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

long long kruskal() {
  vector <long long> ans;
  long long quantitative_coefficient = 1;
  sort(G.begin(), G.begin() + edges);

  for (int i = 0; i < edges; i++) {
    int u = G[i].from;
    int v = G[i].to;
    long long w = G[i].weight;
    if (find_set(u) != find_set(v)) {
      ans.push_back(w);
      union_set(u, v);
    }
  }

  for (int i = 0; i < ans.size(); i++) {
    quantitative_coefficient *= ans[i];
    quantitative_coefficient %= MOD;
  }

  return quantitative_coefficient;
}

int main() {
  fast;
  int t;
  cin >> t;

  while (t--) {
    cin >> nodes >> edges;
    init(nodes);
    for (int i = 0; i < edges; i++) cin >> G[i].from >> G[i].to >> G[i].weight;
    cout << kruskal() << endl;
  }
  return 0;
}
