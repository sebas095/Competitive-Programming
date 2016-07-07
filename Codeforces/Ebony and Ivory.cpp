#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int a, b, c;
  bool ok = false;
  cin >> a >> b >> c;

  for (int i = 0; i <= 10000; i++) {
    int aux = (c - a * i);
    if (((a * i) + aux) == c and (aux % b) == 0 and aux >= 0) {
      ok = true;
      break;
    }
  }

  cout << ((ok)? "Yes" : "No") << endl;
  return 0;
}
