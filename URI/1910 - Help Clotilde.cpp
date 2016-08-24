#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

unordered_set<int> not_seen;

struct state {
  int num, dist;
  state() {}
  state(int n, int d) : num(n), dist(d) {}
};

int operations(int i, int value) {
  if (i == 0) return value - 1;
  if (i == 1) return value + 1;
  if (i == 2) return value >> 1;
  if (i == 3) return value << 1;
  if (i == 4) return value * 3;
}

int bfs(int s, int t) {
  unordered_set<int> seen;
  queue<state> q;

  q.push(state(s, 0));
  seen.insert(s);

  while (!q.empty()) {
    state curr = q.front();
    q.pop();

    if (curr.num == t) return curr.dist;
    for (int i = 0; i < 5; i++) {
      if (i == 2 and curr.num & 1) continue;
      int nvalue = operations(i, curr.num);
      if (!not_seen.count(nvalue) and !seen.count(nvalue)){
        if (nvalue > 0 and nvalue <= 100000) {
          seen.insert(nvalue);
          q.push(state(nvalue, curr.dist + 1));
        }
      }
    }
  }

  return -1;
}

int main() {
  fast;
  int o, d, k, prob;

  while (cin >> o >> d >> k and o + d + k) {
    not_seen.clear();

    while (k--) {
      cin >> prob;
      not_seen.insert(prob);
    }

    cout << bfs(o, d) << endl;
  }

  return 0;
}
