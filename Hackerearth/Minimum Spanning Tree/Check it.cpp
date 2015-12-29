#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define MP make_pair
#define ff first
#define ss second

using namespace std;

typedef pair<int, int> PII;

int main() {
  fast;
  int t, nodes, edges, k;
  cin >> t;

  while (t--) {
    bool ok = true;
    cin >> nodes >> edges;
    vector <PII> G(edges);
    vector <bool> visited(edges, false);

    for (int i = 0; i < edges; i++) cin >> G[i].ff >> G[i].ss;
    for (int i = 0; i < nodes - 1; i++) {
      cin >> k;
      k--;
      if (visited[G[k].ff] and visited[G[k].ss]) ok = false;
      else visited[G[k].ff] = visited[G[k].ss] = true;
    }
    (ok)? cout << "YES" << endl : cout << "NO" << endl;
  }
  return 0;
}
