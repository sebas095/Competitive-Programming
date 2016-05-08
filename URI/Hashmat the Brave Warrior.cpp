#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

typedef long long ll;

int main() {
  fast;
  ll a, b;

  while (cin >> a >> b) {
    cout << abs(a - b) << endl;
  }

  return 0;
}
