#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, in = 0, out = 0;
  double x;
  cin >> n;

  while (n--) {
    cin >> x;
    if (x >= 10 and x <= 20) in++;
    else                     out++;
  }

  cout << in << " in" << endl;
  cout << out << " out" << endl;

  return 0;
}
