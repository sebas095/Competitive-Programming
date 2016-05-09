#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

typedef long long ll;

ll solve(vector<string> &v) {
  ll ans = 0;
  for (int i = 0; i < v.size(); i++) {
    for (int j = 0; j < v[i].size(); j++) {
      ans += (v[i][j] - 'A') + i + j;
    }
  }

  return ans;
}

int main() {
  fast;
  int n, l;
  cin >> n;

  while (n--) {
    cin >> l;
    vector<string> v(l);
    for (int i = 0; i < l; i++) {
      cin >> v[i];
    }
    cout << solve(v) << endl;
  }

  return 0;
}
