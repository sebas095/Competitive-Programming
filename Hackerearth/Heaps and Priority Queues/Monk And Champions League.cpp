#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int m, n, x, ans = 0;
  priority_queue<int> pq;
  cin >> m >> n;

  while (m--) {
    cin >> x;
    pq.push(x);
  }

  while (n--) {
    int top = pq.top(); pq.pop();
    ans += top;
    pq.push(top - 1);
  }

  cout << ans << endl;
  return 0;
}
