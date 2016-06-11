#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int type, tea, ans = 0;
  cin >> type;

  for (int i = 0; i < 5; i++) {
    cin >> tea;
    if (tea == type) ans++;
  }

  cout << ans << endl;
  return 0;
}
