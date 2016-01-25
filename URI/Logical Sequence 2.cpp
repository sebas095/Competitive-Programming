#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int x, y;
  cin >> x >> y;

  for (int i = 1; i <= y; i++) {
    cout << i;
    if (i % x == 0) cout << endl;
    else            cout << " ";
  }
  return 0;
}
