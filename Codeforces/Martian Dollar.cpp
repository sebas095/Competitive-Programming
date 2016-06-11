#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, b, ans = 0, compra, sobrante;
  cin >> n >> b;
  vector<int> money(n);
  for (int i = 0; i < n; i++) cin >> money[i];

  for (int i = 0; i < n; i++) {
    compra = b / money[i];
    sobrante = b % money[i];

    for (int j = i; j < n; j++){
      ans = max(ans, compra * money[j] + sobrante);
    }
  }

  cout << ans << endl;
  return 0;
}
