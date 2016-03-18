#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define oo INT_MAX

using namespace std;

struct Edge {
  int to;
  int weight;
  Edge() {}
  Edge(int t, int w) : to(t), weight(w) {}
  bool operator < (const Edge &e) const {
    return weight > e.weight;
  }
};

int dijkstra(int s, int t, vector<vector<Edge> > &G, vector<int> &dist, vector<int> &p) {
  priority_queue<Edge> pq;
  dist[s] = 0;
  pq.push(Edge(s, 0));
  while (!pq.empty()) {
    int node = pq.top().to;
    int distance = pq.top().weight;
    pq.pop();
    
    if (distance > dist[node]) continue;
    if (node == t) {
     /* cout << "Path" << endl;
      while (node != -1) {
        cout << node << " ";
        node = p[node];
      }
      cout << endl;*/
      return distance;
    }
    
    for (int i = 0; i < G[node].size(); i++) {
      int to = G[node][i].to;
      int weight_extra = G[node][i].weight;
      
      if (distance + weight_extra < dist[to]) {
        dist[to] = distance + weight_extra;
        pq.push(Edge(to, dist[to]));
        p[to] = node;
      }
    }
  }
  
  return oo;
}

int main() {
  fast;
  int tc, v, k, a, b, c, s, t;
  cin >> tc;
  
  while (tc--) {
    cin >> v >> k;
    vector<vector<Edge> >G(v, vector<Edge>());
    vector<int> dist(v, oo), p(v, -1);
    
    for (int i = 0; i < k; i++) {
      cin >> a >> b >> c;
      G[a - 1].push_back(Edge(b - 1, c));
    }
    
    cin >> s >> t;
    int ans = dijkstra(s - 1, t - 1, G, dist, p);
    if (ans == oo) cout << "NO" << endl;
    else cout << ans << endl;
  }
  
  return 0;
}