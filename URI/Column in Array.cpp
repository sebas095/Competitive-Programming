#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  vector<vector<double> > m(12, vector<double>(12));
  char op;
  int col;
  double ans;
  cin >> col >> op;

  for (int i = 0; i < 12; i++)
    for (int j = 0; j < 12; j++)
      cin >> m[j][i];

  ans = accumulate(m[col].begin(), m[col].end(), 0);
  if (op == 'S') cout << fixed << setprecision(1) << ans << endl;
  else           cout << fixed << setprecision(1) << ans / 12.0 << endl;
  return 0;
}
