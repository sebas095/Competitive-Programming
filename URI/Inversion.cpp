#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int inv(int n) {
  string s = to_string(n);
  reverse(s.begin(), s.end());
  return atoi(s.c_str());
}

struct state {
  int a, cost;
  state() {}
  state(int a, int cost) : a(a), cost(cost) {}
};

int bfs(int a, int b) {
  queue<state> q;
  unordered_set<int> vi;
  q.push(state(a, 0));
  vi.insert(a);

  while (!q.empty()) {
    state curr = q.front(); q.pop();
    if (curr.a == b) return curr.cost;

    int tmp1 = curr.a + 1;
    int tmp2 = inv(curr.a);

    if (!vi.count(tmp1)) {
      vi.insert(tmp1);
      q.push(state(tmp1, curr.cost + 1));
    }
    if (!vi.count(tmp2)) {
      vi.insert(tmp2);
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
    cin >> a >> b;
    cout << bfs(a, b) << endl;
  }

  return 0;
}
