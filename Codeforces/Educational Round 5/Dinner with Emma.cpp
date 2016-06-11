#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

typedef priority_queue<int, vector<int>, greater<int> > pq;

int main() {
  fast;
  int n, m, a, ans = 0;
  cin >> n >> m;
  vector <pq> dinner(n);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a;
      dinner[i].push(a);
    }
  }

  for (int i = 0; i < n; i++)
    ans = max(ans, dinner[i].top());

  cout << ans << endl;
  return 0;
}
