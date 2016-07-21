#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int solve(int n) {
  int first = n * n * n * n;
  int second = -6 * n * n * n;
  int third = 23 * n * n;
  int fourth = -18 * n + 24;
  return (first + second + third + fourth) / 24;
}

int main() {
  fast;
  int t, n;
  cin >> t;

  while (t--) {
    cin >> n;
    cout << solve(n) << endl;
  }

  return 0;
}
