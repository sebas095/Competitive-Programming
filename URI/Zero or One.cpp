#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int a, b, c;

  while (cin >> a >> b >> c) {
    if (a != b and a != c)      cout << "A" << endl;
    else if (b != a and b != c) cout << "B" << endl;
    else if (c != a and c != b) cout << "C" << endl;
    else                        cout << "*" << endl;
  }

  return 0;
}
