#include <bits/stdc++.h>
#define endl '\n'
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

struct state {
  string a;
  int deep;
  state() {}
  state(string a, int deep) : a(a), deep(deep) {}
};

vector<string> bfs(string source, unordered_map<string, vector<string> > &G, int degree) {
  unordered_set<string> vi;
  vector<string> ans;
  queue<state> q;
  vi.insert(source);
  q.push(state(source, 0));

  while (!q.empty()) {
    state curr = q.front(); q.pop();
    for (int i = 0; i < G[curr.a].size(); i++) {
      state aux(G[curr.a][i], curr.deep + 1);
      if (!vi.count(aux.a) and aux.deep <= degree) {
        q.push(aux);
        vi.insert(aux.a);
        ans.push_back(aux.a);
      }
    }
  }
  return ans;
}

int main() {
  fast;
  int n, g;
  string a, b;
  unordered_map<string, vector<string> > G;
  cin >> n >> g;

  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  vector<string> ans(bfs("Rerisson", G, g));
  sort(ans.begin(), ans.end());

  cout << ans.size() << endl;
  for (int i = 0; i < ans.size(); i++)
    cout << ans[i] << endl;

  return 0;
}
