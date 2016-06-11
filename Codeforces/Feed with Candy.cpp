#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;
typedef long long ll;

int n, x;

struct Candy {
  int t;
  ll h, m;
  bool operator < (const Candy &c) const {
    if (c.m == m) {
      if (c.h == h) {
        return t > c.t;
      }
      return h > c.h;
    }
    return m > c.m;
  }
};

int solve(vector<Candy> &sweet) {
  int ans = 0;
  for (int type = 0; type < 2; type++) {
    ll curr_height = x;
    int curr_t = type;
    vector<bool> seen(n, false);
    int cont = 0;
    bool flag = true;

    while (flag) {
      flag = false;
      for (int i = 0; i < n; i++) {
        if (!seen[i] && sweet[i].h <= curr_height && sweet[i].t != curr_t) {
          cont++;
          curr_height += sweet[i].m;
          curr_t = sweet[i].t;
          seen[i] = true;
          flag = true;
          break;
        }
      }
    }

    ans = max(ans, cont);
  }
  return ans;
}

int main() {
  fast;
  cin >> n >> x;
  vector<Candy> sweet(n);

  for (int i = 0; i < n; i++) {
    cin >> sweet[i].t >> sweet[i].h >> sweet[i].m;
  }

  sort(sweet.begin(), sweet.end());
  cout << solve(sweet) << endl;
  return 0;
}
