#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define delta (int)2000

using namespace std;
typedef long long ll;

void dfs(ll u, map<ll, vector<ll> > &G, map<ll, bool> &vi) {
  vi[u] = true;
  for (ll i = 0; i < G[u].size(); i++) {
    if (!vi[G[u][i]])
      dfs(G[u][i], G, vi);
  }
}

int main() {
  fast;
  int n;
  ll x, y, cc = 0;
  map<ll, vector<ll> > G;
  map<ll, bool> vi;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> x >> y;
    G[x].push_back(y + delta);
    G[y + delta].push_back(x);
    vi[x] = vi[y + delta] = false;
  }

  for (auto &it : vi) {
    if(!it.second) {
      dfs(it.first, G, vi);
      cc++;
    }
  }

  cout << cc - 1 << endl;

  return 0;
}
