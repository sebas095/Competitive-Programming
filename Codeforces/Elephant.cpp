#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  long long x, ans, tmp;
  cin >> x;
  ans = x / 5;
  tmp = x % 5;

  while (tmp) {
    if (tmp % 4 == 0) {
      ans += tmp / 4;
      tmp %= 4;
    }
    else if (tmp % 3 == 0) {
      ans += tmp / 3;
      tmp %= 3;
    }
    else if (tmp % 2 == 0) {
      ans += tmp / 2;
      tmp %= 2;
    }
    else if (tmp % 1 == 0) {
      ans += tmp / 1;
      tmp %= 1;
    }
  }

  cout << ans << endl;
  return 0;
}
