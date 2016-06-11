#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int x, y;
  while (cin >> x >> y and x and y) {
    if (x > 0) {
      if (y > 0) cout << "primeiro" << endl;
      else       cout << "quarto" << endl;
    }
    else {
      if (y > 0) cout << "segundo" << endl;
      else       cout << "terceiro" << endl;
    }
  }
  return 0;
}
