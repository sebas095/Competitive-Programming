#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

typedef long long ll;

int main() {
  fast;
  ll x, cont = 6;
  cin >> x;
  if (x & 1) {
    cout << x << endl;
    cont--;
  }
  else x--;

  for (ll i = 0; i < cont; i++) {
    x += 2;
    cout << x << endl;
  }
  return 0;
}
