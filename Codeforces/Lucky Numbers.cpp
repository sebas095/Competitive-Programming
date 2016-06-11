#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;
typedef long long int ll;

int main() {
  fast;
  ll n, ans = 0LL;
  cin >> n;
  for (int i = 1; i <= n; i++ ) {
  	ans += (1LL << i);
  }
  cout << ans << endl;
  return 0;
}
