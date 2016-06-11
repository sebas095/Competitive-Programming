#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int t, n;
  cin >> t;

  while (t--) {
    cin >> n;
    if (n > 2014) cout << n - 2014 << " A.C." << endl;
    else          cout << 2015 - n << " D.C." << endl;
  }
  return 0;
}
