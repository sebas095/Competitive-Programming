#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

ostream& operator << (ostream &out, vector<int> &v) {
  for (int i = 0; i < v.size(); i++) {
    if (i) out << ", ";
    out << v[i];
  }
  out << endl;
}

int main() {
  fast;
  int n;
  queue<int> q;

  while (cin >> n and n) {
    for (int i = 1; i <= n; i++) q.push(i);
    cout << "Discarded cards:";

    while (q.size() > 1) {
      cout << " " << q.front();
      q.pop();
      int curr = q.front(); q.pop();
      if (!q.empty()) cout << ",";
      q.push(curr);
    }

    cout << endl << "Remaining card: " << q.front() << endl;
    q.pop();
  }

  return 0;
}
