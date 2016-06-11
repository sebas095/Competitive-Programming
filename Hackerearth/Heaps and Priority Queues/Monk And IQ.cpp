#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

vector<long long> cost[100009];
priority_queue<pair<long long, int>, vector<pair<long long, int> >, greater<pair<long long, int> > > pq;


ostream& operator << (ostream& out, vector<int> &v) {
  for (int i = 0; i < v.size(); i++) {
    if (i)
      out << " ";
    out << v[i];
  }
  out << endl;
  return out;
}

void solve(vector<int> &x, vector<int> &ans) {
  pair<long long, int> z;
  for (int i = 0; i < x.size(); i++) {
    z = pq.top();
    if (cost[z.second].size() == 0)
      z.first += x[i];

    else if(cost[z.second].size() == 1) {
      z.first += x[i];
      z.first <<= 1;
    }
    else {
      int sz = cost[z.second].size();
      z.first = cost[z.second][sz - 1] + x[i];
      z.first *= (sz + 1);
    }

    cost[z.second].push_back(x[i]);
    ans[i] = z.second + 1;
    pq.pop();
    pq.push(z);
  }
}

int main() {
  fast;
  int c, p, n, y;
  cin >> c >> p >> n;
  vector<int> x(p), ans(p);

  for (int i = 0; i < n; i++) {
    cin >> y;
    pq.push(make_pair(y, i));
    cost[i].push_back(y);
  }

  for (int i = n; i < c; i++)
    pq.push(make_pair(0, i));

  for (int i = 0; i < p; i++) cin >> x[i];
  solve(x, ans);

  cout << ans;
  return 0;
}
