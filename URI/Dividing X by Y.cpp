#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int t;
  double a, b;
  cin >> t;

  while (t--) {
    cin >> a >> b;
    if (b == 0.0) cout << "divisao impossivel" << endl;
    else cout << fixed << setprecision(1) << a / b << endl;
  }
  return 0;
}
