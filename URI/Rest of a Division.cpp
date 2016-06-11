#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

typedef long long ll;

int main() {
  fast;
  ll x, y;
  cin >> x >> y;
  if (x > y) swap(x, y);

  for (int i = x + 1; i < y; i++) {
    if (i % 5 == 3 or i % 5 == 2)
      cout << i << endl;
  }
  return 0;
}
