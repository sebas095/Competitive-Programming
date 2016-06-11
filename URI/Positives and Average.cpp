#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n = 6;
  double x, pos = 0.0, av = 0;

  while (n--) {
    cin >> x;
    if (x > 0) {
      pos++;
      av += x;
    }
  }

  cout << pos << " valores positivos" << endl;
  cout << fixed << setprecision(1) << av / pos << endl;

  return 0;
}
