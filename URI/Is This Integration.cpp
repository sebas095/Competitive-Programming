#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define PI acos(-1)

using namespace std;

int main() {
  fast;
  double ans1, ans2, ans3, a;

  while (cin >> a) {
    ans1 = a * a * (1 - sqrt(3) + PI / 3);
    ans2 = a * a * (2 * sqrt(3) - 4 + PI / 3);
    ans3 = a * a * (4 - 2 * PI / 3 - sqrt(3));  
    cout << fixed << setprecision(3) << ans1 << " " << ans2 << " " << ans3 << endl;
  }
  return 0;
}
