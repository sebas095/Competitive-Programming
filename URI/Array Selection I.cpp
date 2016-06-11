#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  double x;
  for (int i = 0; i < 100; i++) {
    cin >> x;
    if (x <= 10.0) {
      cout << "A[" << i << "] = " << fixed << setprecision(1) << x << endl;
    }
  }
  return 0;
}
