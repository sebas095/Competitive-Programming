#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, val;
  cin >> n;

  while (n--) {
    cin >> val;
    if (val == 0) cout << "NULL" << endl;
    else if (val & 1) {
      cout << "ODD";
      if (val > 0) cout << " POSITIVE" << endl;
      else         cout << " NEGATIVE" << endl;
    }
    else {
      cout << "EVEN";
      if (val > 0) cout << " POSITIVE" << endl;
      else         cout << " NEGATIVE" << endl;
    }
  }
  return 0;
}
