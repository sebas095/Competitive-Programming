#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, a, b;
  cin >> n;

  while (n--) {
    cin >> a >> b;
    cout << __gcd(a, b) << endl;
  }

  return 0;
}
