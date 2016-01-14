#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

long long solve(long long n, long long m) {
  long long a = n, b = m, ans = 0, tmp = 0;

  while (a and b) {
    if (a < 0 and b < 0) break;
    if (a > b) {
      tmp = a / b;
      ans += tmp;
      a -= tmp * b;
    }
    else {
      tmp = b / a;
      ans += tmp;
      b -= tmp * a;
    }
  }

  return ans;
}

int main() {
  fast;
  long long n, a, b;
  cin >> n;

  while(n--) {
    cin >> a >> b;
    cout << solve(a, b) << endl;
  }
  return 0;
}
