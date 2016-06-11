#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int pos[100009];
  int n, cont = 1, p, ans = 1;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> p;
    pos[p - 1] = i;
  }

  for (int i = 1; i < n; i++) {
    if (pos[i - 1] < pos[i]) {
      cont++;
      ans = max(ans, cont);
    }
    else cont = 1;
  }

  cout << n - ans << endl;
  return 0;
}
