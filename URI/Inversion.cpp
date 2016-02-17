#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int inv(int x) {
  int r, revers = 0;
  while(x > 0) {
    r = x % 10;
    x = x / 10;
    revers = revers * 10 + r;
  }
  return revers;
}

struct state {
  int a, cost;
  state() {}
  state(int a, int cost) : a(a), cost(cost) {}
};

bool vi[100006];

int bfs(int a, int b) {
  queue<state> q;
  q.push(state(a, 0));
  vi[a] = true;

  while (!q.empty()) {
    state curr = q.front(); q.pop();
    if (curr.a == b) return curr.cost;

    int tmp1 = curr.a + 1;
    int tmp2 = inv(curr.a);

    if (!vi[tmp1]) {
      vi[tmp1] = true;
      q.push(state(tmp1, curr.cost + 1));
    }
    if (!vi[tmp2]) {
      vi[tmp2] = true;
      q.push(state(tmp2, curr.cost + 1));
    }
  }
  return -1;
}

int main() {
  fast;
  int t, a, b;
  cin >> t;

  while (t--) {
    memset(vi, false, sizeof(vi));
    cin >> a >> b;
    cout << bfs(a, b) << endl;
  }

  return 0;
}
