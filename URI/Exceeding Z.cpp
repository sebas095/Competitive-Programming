#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int x, z, ans = 0, sum = 0;
  cin >> x;

  while(cin >> z and z <= x) {}
  for (int i = x; i <= z; i++) {
    sum += i;
    ans++;
    if (sum >= z) break;
  }

  cout << ans << endl;
  return 0;
}
