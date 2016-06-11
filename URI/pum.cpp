#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n;
  cin >> n;

  for (int i = 1; i <= (n << 2); i++) {
    if (i % 4) cout << i << " ";
    else if (i % 4 == 0) {
      cout << "PUM" << endl;
    }
  }

  return 0;
}
