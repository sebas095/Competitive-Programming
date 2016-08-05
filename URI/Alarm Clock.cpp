#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int h1, h2, m1, m2;

  while (cin >> h1 >> m1 >> h2 >> m2 and (h1 + m1 + h2 + m2)) {
    int ans1 = h1 * 60 + m1;
    int ans2 = h2 * 60 + m2;
    ans2 += (ans1 > ans2)? 1440 : 0;
    cout << ans2 - ans1 << endl;
  }

  return 0;
}
