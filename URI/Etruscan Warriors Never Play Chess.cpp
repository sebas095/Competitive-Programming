#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

long long gauss_inverse(long long n) {
  long double ans = sqrt(1 + 8 * n * 1.0);
  return floor((-1 + ans) / 2.0);
}

int main() {
  fast;
  long long nc, n;
  cin >> nc;

  while (nc--) {
    cin >> n;
    cout << gauss_inverse(n) << endl;
  }

  return 0;
}
