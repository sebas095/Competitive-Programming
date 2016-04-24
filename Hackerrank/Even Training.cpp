#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, num, ans = 0;
  cin >> n;

  while (n--) {
    cin >> num;
    ans += num;
  }

  cout << ((ans & 1)? "No" : "Yes") << " " << ans << endl;
  return 0;
}
