#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  long double n;
  cout << fixed;
  cout.precision(6);

  while (cin >> n and n) {
    long double term1 = 4 * (n * (n + 1) * (2 * n + 1) / 6);
    long double term2 = 2 * n * (n + 1);
    long double term3 = n;
    long double term4 = 2 * (n * n) * (n + 1);
    long double term5 = (2 * (n * n));
    long double term6 = (n * n * n);
    long double sumAns = term1 - term2 + term3 - term4 + term5 + term6;
    long double ans = sqrt(sumAns / (n - 1));
    cout << ans << endl;
  }
  return 0;
}
