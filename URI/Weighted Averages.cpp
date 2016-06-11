#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int weight(int &n) {
  if (n == 2) return 2;
  if (n == 1) return 3;
  if (n == 0) return 5;
}

int main() {
  fast;
  int t, nc = 0;
  double n, av;
  cin >> t;

  while (t--) {
    nc = 3; av = 0.0;
    while (nc--) {
      cin >> n;
      av += weight(nc) * n;
    }
    cout << fixed << setprecision(1) << av / 10.0 << endl;
  }

  return 0;
}
