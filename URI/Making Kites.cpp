#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int tc, a, b;
  cin >> tc;

  while (tc--) {
    cin >> a >> b;
    double area = (a * b * 1.0) / 2.0;
    cout << fixed << setprecision(0) << trunc(area) << " cm2" << endl;
  }

  return 0;
}
