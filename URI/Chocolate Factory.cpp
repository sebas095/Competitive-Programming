#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  double a, b, c;

  while (cin >> a >> b >> c and a + b + c) {
    double ans = pow((a * b * c), 1 / 3.0);
    cout << floor(ans) << endl;
  }

  return 0;
}
