#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  long long t, n;
  cin >> t;

  while (t--) {
    cin >> n;
    cout << (n - 1) * n / 2 << endl;
  }

  return 0;
}
