#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

double solve(int n) {
  double term1 = (1 + sqrt(5.0)) / 2;
  double term2 = (1 - sqrt(5.0)) / 2;

  term1 = pow(term1, n);
  term2 = pow(term2, n);

  return (term1 - term2) / sqrt(5.0);
}

int main() {
  fast;
  int n;
  cin >> n;
  cout << fixed;
  cout.precision(1);
  cout << solve(n) << endl;
  return 0;
}
