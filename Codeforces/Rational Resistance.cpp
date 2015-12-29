#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

using namespace std;

int main() {
  fast;
  long long a, b, ans = 0;
  cin >> a >> b;

  while (true) {
    ans += (a / b);
    a %= b;
    if (!a) break;
    swap(a, b);
  }

  cout << ans << endl;
  return 0;
}
