#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

typedef long long ll;

int main() {
  fast;
  int x;
  cin >> x;

  for (int i = 1; i <= x; i++) {
    if (i & 1) cout << i << endl;
  }
  return 0;
}
