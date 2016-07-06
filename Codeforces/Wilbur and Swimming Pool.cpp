#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;


int main() {
  fast;
  set<int> x, y;
  int n, x0, y0;
  cin >> n;

  while (n--) {
    cin >> x0 >> y0;
    x.insert(x0);
    y.insert(y0);
  }

  if (x.size() != 2 or y.size() != 2) {
    cout << "-1" << endl;
  }
  else {
    cout << abs(*x.begin() - *x.rbegin()) * abs(*y.begin() - *y.rbegin()) << endl;
  }

  return 0;
}
