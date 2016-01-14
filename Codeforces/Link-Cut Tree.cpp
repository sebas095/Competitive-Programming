#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  long long l, r, k, aux = 1;
  bool ans = false;
  cin >> l >> r >> k;

  while (aux <= r) {
    if (aux >= l and aux <= r) {
      cout << aux << " ";
      ans = true;
    }
    if (aux > r / k) break;
    aux *= k;
  }

  if (!ans) cout << "-1";
  cout << endl;
  return 0;
}
