#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;
typedef long long ll;

int main() {
  fast;
  ll n;
  cin >> n;

  if (n == 3) cout << "0" << endl;
  else if (n == 4) cout << "2" << endl;
  else {
    ll tmp = 0, ans = 0;
    for (int i = 2; i < n - 1; i++) {
      tmp = ans + i;
      ans = tmp;
   }
   cout << ans << endl;
 }
  return 0;
}
