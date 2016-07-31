#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  double a, b, c;
  cin >> a >> b;
  c = (b - a) * 100.0 / a;
  cout << fixed << setprecision(2) << c << "%" << endl;
  return 0;
}
