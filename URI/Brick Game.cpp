#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int t, n;
  cin >> t;

  for (int nc = 0; nc < t; nc++) {
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    cout << "Case " << nc + 1 << ": " << v[n >> 1] << endl;
  }

  return 0;
}
