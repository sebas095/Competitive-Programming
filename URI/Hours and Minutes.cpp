#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int ang;

  while (cin >> ang) {
    cout << ((ang % 6 == 0)? "Y" : "N") << endl;
  }

  return 0;
}
