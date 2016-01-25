#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

typedef long long ll;

int main() {
  fast;
  ll x, ans = 0, pos = 0;
  int n = 100, index = 1;

  while (n--) {
    cin >> x;
    if (x > ans) {
      ans = x;
      pos = index;
    }
    index++;
  }

  cout << ans << endl << pos << endl;
  return 0;
}
