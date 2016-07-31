#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

double f(double n) {
  return (n / log(n));
}

int main() {
  fast;
  double n;
  cin >> n;
  cout << fixed;
  cout.precision(1);
  cout << f(n) << " " << (1.25506 * f(n)) << endl;
  return 0;
}
