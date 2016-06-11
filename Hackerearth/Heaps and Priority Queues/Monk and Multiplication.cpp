#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  unsigned long long n, val, a, b, c, ans;
  priority_queue<unsigned long long> pq;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> val;
    pq.push(val);
    if (pq.size() < 3)
      cout << "-1" << endl;
    else {
      a = pq.top(); pq.pop();
      b = pq.top(); pq.pop();
      c = pq.top(); pq.pop();

      pq.push(a);
      pq.push(b);
      pq.push(c);

      ans = a * b * c;
      cout << ans << endl;
    }
  }
  return 0;
}
