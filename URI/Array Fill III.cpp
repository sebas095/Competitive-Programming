#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  double x;
  cin >> x;

  for (int i = 0; i < 100; i++) {
    cout << "N[" << i <<"] = " << fixed << setprecision(4) << x << endl;
    x /= 2.0;
  }
  return 0;
}
