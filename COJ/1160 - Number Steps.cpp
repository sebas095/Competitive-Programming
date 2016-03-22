#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, x, y;
  cin >> n;
  
  while (n--) {
    cin >> x >> y;
    if (x == y) {
      if (x & 1) {
        cout << (x << 1) - 1 << endl;
      }
      else {
        cout << (x << 1) << endl;
      }
    }
    else if ((x - 2) == y) {
      if (x & 1) {
        cout << x + y - 1 << endl;
      }
      else {
        cout << x + y << endl;
      }
    }
    else cout << "No Number" << endl;
  }
  return 0;
}