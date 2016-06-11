#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int t, n, m;
  cin >> t;

  while (t--) {
    cin >> n >> m;
    cout << (n / 3) * (m / 3) << endl;
  }

  return 0;
}
