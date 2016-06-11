#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  double a, b, c;
  cin >> a >> b >> c;
  cout << "MEDIA = " << fixed << setprecision(1) << ((a * 2) + (b * 3) + (c * 5)) / 10.0 << endl;
  return 0;
}
