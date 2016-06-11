#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n;

  while (cin >> n) {
    cout << fixed << setprecision(2) << (2.0 * sqrt(3) / 5) * (n * n * 1.0) << endl;
  }

  return 0;
}
