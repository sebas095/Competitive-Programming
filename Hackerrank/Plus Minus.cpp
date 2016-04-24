#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, num;
  double pos = 0.0, neg = 0.0, zer = 0.0;
  cout << fixed;
  cout.precision(6);
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> num;
    if (num < 0)      neg++;
    else if (num > 0) pos++;
    else              zer++;
  }

  cout << (pos / n) << endl;
  cout << (neg / n) << endl;
  cout << (zer / n) << endl;
  return 0;
}
