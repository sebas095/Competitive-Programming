#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

typedef long long ll;

int main() {
  fast;
  ll x;
  for (int i = 0; i < 10; i++) {
    cin >> x;
    cout << "X[" << i << "] = ";
    if (x <= 0) cout << "1" << endl;
    else cout << x << endl;
  }
  return 0;
}
