#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int p[60];

int find_set(int x) {
  return (x == p[x])? x : p[x] = find_set(p[x]);
}

void union_set(int x, int y) {
  int px = find_set(x);
  int py = find_set(y);
  if (px == py) return;
  p[px] = py;
}

int init(int n) {
  for (int i = 0; i <= n; i++)
    p[i] = i;
}

int main() {
  fast;
  int t;
  cin >> t;

  while (t--) {
    int src;
    int nodes, edges, a, b;
    cin >> src >> nodes >> edges;
    init(nodes);

    for (int i = 0; i < edges; i++) {
      cin >> a >> b;
      union_set(a, b);
    }

    int parent = find_set(src);
    int ans = 0;

    for (int i = 0; i < nodes; i++) {
      if (find_set(i) == parent) ans++;
    }

    ans--;
    cout << (ans << 1) << endl;
  }

  return 0;
}
