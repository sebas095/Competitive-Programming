#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

struct state {
  int v, dist;
  state() {}
  state(int v, int dist) : v(v), dist(dist) {}
};

int operation(int i, int n) {
  if (i == 0) return n << 1;
  if (i == 1) return n * 3;
  if (i == 2) return n >> 1;
  if (i == 3) return n / 3;
  if (i == 4) return n + 7;
  if (i == 5) return n - 7;
}

int bfs(int s, int t) {
  unordered_set <int> vi;
  queue<state> q;

  vi.insert(s);
  q.push(state(s, 0));

  while (!q.empty()) {
    state curr = q.front(); q.pop();
    if (curr.v == t) return curr.dist;

    for (int i = 0; i < 6; i++) {
      int tmp = operation(i, curr.v);
      if (!vi.count(tmp)) {
        vi.insert(tmp);
        q.push(state(tmp, curr.dist + 1));
      }
    }
  }
}

int main() {
  fast;
  int a, b;
  cin >> a >> b;
  cout << bfs(a, b) << endl;
  return 0;
}
