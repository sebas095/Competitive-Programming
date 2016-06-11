#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;
typedef unsigned long long ull;

int main() {
  fast;
  int n, x;
  cin >> n;

  while (n--) {
    cin >> x;
    ull ans = 0, tmp = 1;
    for (int i = 0; i < x; i++) {
      ans += tmp;
      tmp <<= 1;
    }
    cout << ans / 12000 << " kg" << endl;
  }
  return 0;
}
