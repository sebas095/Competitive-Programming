#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int solve(vector<int> &v) {
  int n = v.size(), ans = 0;

  for (int i = 0; i < n; i++) {
    if (v[i] > v[(i + 1) % n]) {
      if (v[(i + 1) % n] < v[(i + 2) % n]) ans++;
    }
    else if (v[i] < v[(i + 1) % n]) {
      if (v[(i + 1) % n] > v[(i + 2) % n]) ans++;
    }
  }

  return ans;
}

int main() {
  fast;
  int n;

  while (cin >> n and n) {
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    cout << solve(v) << endl;
  }

  return 0;
}
