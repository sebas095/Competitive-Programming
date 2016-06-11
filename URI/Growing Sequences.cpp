#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

typedef long long ll;

int main() {
  fast;
  ll x;

  while (cin >> x and x) {
    for (int i = 1; i <= x; i++) {
      cout << i;
      if (i < x) cout << " ";
    }
    cout << endl;
  }
  return 0;
}
